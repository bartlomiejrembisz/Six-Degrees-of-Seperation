#include "SixDegreesofSeperation.h"
#include <Windows.h>
#include <fstream>
#include "rapidjson\document.h"
#include <thread>


SixDegreesofSeperation::SixDegreesofSeperation(QWidget *parent)
	: QMainWindow(parent)
{
	//Initialising ui and vectors;
	ui.setupUi(this);
	actorList = new std::vector<Actor*>;
	movieList = new std::vector<Movie*>;

	//Event handlers for the menu buttons
	connect(ui.ExitMenuButton, SIGNAL(clicked()), this, SLOT(exitApp()));
	connect(ui.MoviesMenuButton, SIGNAL(clicked()), this, SLOT(openMoviesDialog()));
	connect(ui.ActorsMenuButton, SIGNAL(clicked()), this, SLOT(openActorsDialog()));
	connect(ui.SeperationMenuButton, SIGNAL(clicked()), this, SLOT(openSeperationDialog()));
	std::thread t1([this]() { loadMovieList(); });
	t1.detach();

}

//Open MovieDialog
void SixDegreesofSeperation::openMoviesDialog()
{
	if (!this->dataLoaded)
		return;
	movieDialog = new MovieDialog(this, movieList);
	movieDialog->show();	
}

//Open ActorDialog
void SixDegreesofSeperation::openActorsDialog()
{
	if (!this->dataLoaded)
		return;
	actorsDialog = new ActorDialog(this, actorList);
	actorsDialog->show();
}

//Open SeperationDialog
void SixDegreesofSeperation::openSeperationDialog()
{
	if (!this->dataLoaded)
		return;
	seperationDialog = new SeperationDialog(this, actorList);
	seperationDialog->show();
}

//Open EpisodeInfo dialog
void SixDegreesofSeperation::openEpisodeInfoDialog()
{
	if (!this->dataLoaded)
		return;
	if (newMovie->getSelectedEpisode() == NULL)
		return;
	EpisodeInfo *newEpisodeInfo = new EpisodeInfo(this, newMovie->getSelectedEpisode());
	newEpisodeInfo->show();
}

//Exit app
void SixDegreesofSeperation::exitApp()
{
	exit(0);
}

//Open MoveInfo dialog
void SixDegreesofSeperation::viewMovie()
{
	if (!this->dataLoaded)
		return;
	newMovie = new MovieInfo(this, movieDialog->getSelectedMovie());
	newMovie->show();
}

//Open ActorInfo dialog
void SixDegreesofSeperation::viewActor()
{
	if (!this->dataLoaded)
		return;
	newActor = new ActorInfo(this, actorsDialog->getSelectedActor());
	newActor->show();
}

//Set the two actors for the BFS
void SixDegreesofSeperation::setFirstActor()
{
	firstActor = seperationDialog->getSelectedActor();
}

void SixDegreesofSeperation::setSecondActor()
{
	secondActor = seperationDialog->getSelectedActor();
}

//Function to return the movie address of an existing Movie.
Movie* SixDegreesofSeperation::getMovieAddress(std::string &name)
{
	auto it = std::lower_bound(movieList->begin(), movieList->end(), name, [](Movie* a, std::string name) { return a->getName() < name; });
	if ((it != movieList->end()) && (*it)->getName() == name)
	{
		return (*movieList)[std::distance(movieList->begin(), it)];
	}
	return nullptr;
}

//Function to return the movie address of an existing Actor.
Actor* SixDegreesofSeperation::getActorAddress(std::string &name)
{
	auto it = std::lower_bound(actorList->begin(), actorList->end(), name, [](Actor* a, std::string name) { return a->getName() < name; });
	if ((it != actorList->end()) && (*it)->getName() == name)
	{
		return (*actorList)[std::distance(actorList->begin(), it)];
	}
	return nullptr;
}
//Add movie to movieList in alphabetical order
void SixDegreesofSeperation::AddMovie(Movie* movie)
{
	std::vector<Movie*>::iterator it = std::upper_bound(movieList->begin(), movieList->end(), movie,
		[](Movie* a, Movie* b) { return a->getName() < b->getName(); });

	this->movieList->insert(it, movie);
}

//Add actor to actorList in alphabetical order
void SixDegreesofSeperation::AddActor(Actor* actor)
{
	std::vector<Actor*>::iterator it = std::upper_bound(actorList->begin(), actorList->end(), actor,
		[](Actor* a, Actor* b) { return a->getName() < b->getName(); });

	this->actorList->insert(it, actor);
}

//Function that stores the names of the files in a given directory inside a vector and returns it.
std::vector<std::string> SixDegreesofSeperation::GetFiles(const std::wstring& init_path)
{
	std::wstring path = init_path + L"*.json";
	std::string output;
	WIN32_FIND_DATA fileData;
	std::vector<std::string> outputVect;

	HANDLE hFile = FindFirstFile(path.c_str(), &fileData);

	do
	{
		std::wstring ws(fileData.cFileName);
		std::string output(ws.begin(), ws.end());
		outputVect.push_back(output);
	} while (FindNextFile(hFile, &fileData));

	FindClose(hFile);

	return outputVect;
}

//Function which starts the breadth first search
void SixDegreesofSeperation::beginSearch()
{
	if (firstActor == nullptr)
		return;
	if (secondActor == nullptr)
		return;
	if (firstActor == secondActor)
		return;

	BFS bfsSearch;
	std::vector<Actor*> bfsResult = bfsSearch.search(firstActor, secondActor, actorList->size());
	QMessageBox *bfsOutput = new QMessageBox;
	std::string bfsOutputStr;
	bfsOutputStr += bfsResult[0]->getName();
	for (int i = 1; i < bfsResult.size(); i++)
	{
		bfsOutputStr += " --> " + bfsResult[i]->getName();
	}
	bfsOutputStr += "\nDegree of Seperation: ";
	bfsOutput->setText(QString::fromStdString(bfsOutputStr) + QString::number(bfsResult.size()));
	bfsOutput->show();

}

void SixDegreesofSeperation::loadMovieList()
{
	std::wstring path = L"Movies\\";
	std::string pathString(path.begin(), path.end());
	std::vector<std::string> fileNames = this->GetFiles(path);

	//Loop that iterates through every file in the /Movies folder.
	for (int i = 0; i < fileNames.size(); i++)
	{
		std::string filePath = pathString + fileNames[i];
		size_t lastindex = fileNames[i].find_last_of(".");
		fileNames[i] = fileNames[i].substr(0, lastindex);
		std::ifstream file(filePath);

		std::string jsonContent;

		//Movie variables
		Movie* newMovie;
		std::string movieName;
		std::vector<std::string> actorNames;
		std::vector<std::string> directorNames;
		std::vector<std::string> genres;
		double movieRating;
		std::string moviePlot;
		std::string releaseDate;

		std::vector<Episode*> listOfEpisodes;

		//Load content of JSON file
		jsonContent.assign((std::istreambuf_iterator<char>(file)),
			std::istreambuf_iterator<char>());

		//Parse JSON
		rapidjson::Document newJSON;
		rapidjson::ParseResult result = newJSON.Parse(jsonContent.c_str());
		if (!result) 
			continue;	

		std::string movieType = newJSON["type"].GetString();
		if (movieType == "tvserie")
			newMovie = new TVSerie();
		else
			newMovie = new Movie();

		//Loading movie details
		movieName = newJSON["name"].GetString();
		for (rapidjson::SizeType i = 0; i < newJSON["actorList"].Size(); i++)
			actorNames.push_back(newJSON["actorList"][i].GetString());

		for (rapidjson::SizeType i = 0; i < newJSON["director"].Size(); i++)
			directorNames.push_back(newJSON["director"][i].GetString());

		for (rapidjson::SizeType i = 0; i < newJSON["genres"].Size(); i++)
			genres.push_back(newJSON["genres"][i].GetString());

		moviePlot = newJSON["plot"].GetString();
		releaseDate = newJSON["releaseDate"].GetString();
		movieRating = newJSON["rating"].GetDouble();
		int test = 0;
		if (movieType == "tvserie")
		{
			for (rapidjson::SizeType i = 0; i < newJSON["listOfEpisodes"].Size(); i++)
			{
				Episode* tempEpisode = new Episode;
				tempEpisode->setEpisodeName(newJSON["listOfEpisodes"][i]["episodeName"].GetString());
				tempEpisode->setAirDate(newJSON["listOfEpisodes"][i]["airDate"].GetString());
				tempEpisode->setEpisodeNumber(newJSON["listOfEpisodes"][i]["episodeNumber"].GetInt());
				tempEpisode->setEpisodePlot(newJSON["listOfEpisodes"][i]["episodePlot"].GetString());
				tempEpisode->setSeasonNumber(newJSON["listOfEpisodes"][i]["seasonNumber"].GetInt());
				listOfEpisodes.push_back(tempEpisode);
			}
			int test = 0;
		}


		//Adding the actors of the movie to the actors list.
		for (int j = 0; j < actorNames.size(); j++)
		{
			Actor* newActor;

			//Get the address of the existing actor.
			newActor = this->getActorAddress(actorNames[j]);

			//If the actor doesn't exist then create a new one, add the movie if he exists.
			if (newActor != nullptr)
			{
				newActor->AddMovie(newMovie);
			}
			else
			{
				//if the actor doesn't exist, create a new one and add him to the array in an alphabetical order.
				newActor = new Actor(actorNames[j], newMovie);

				this->AddActor(newActor);
			}

			//Add the actor to the movie's cast
			newMovie->AddCast(newActor);
		}
		newMovie->setName(movieName);
		newMovie->setDirectors(directorNames);
		newMovie->setGenres(genres);
		newMovie->setPlot(moviePlot);
		newMovie->setReleaseDate(releaseDate);
		newMovie->setRating(movieRating);
		if (movieType == "tvserie")
		{
			static_cast<TVSerie*>(newMovie)->setListOfEpisodes(listOfEpisodes);
		}
		this->AddMovie(newMovie);
	}
	ui.fileStatus->setText("Finished loading");
	this->dataLoaded = true;
}
