#include "MovieInfo.h"



MovieInfo::MovieInfo(QWidget *parent, Movie* _movie)
{
	ui.setupUi(this);

	//Populating the fields
	ui.MovieName->setText(QString::fromStdString(_movie->getName()));
	ui.MovieRating->setText(QString::number(_movie->getRating()));
	std::string tempPlot = _movie->getPlot();
	tempPlot.insert(0, "<html>");
	if (tempPlot.size() > 90)
		tempPlot.insert(90, "<br>");
	if (tempPlot.size() > 180)
		tempPlot.insert(180, "<br>");
	if (tempPlot.size() > 270)
		tempPlot.insert(270, "<br>");

	tempPlot.insert(tempPlot.back(), "</html>");
	ui.MoviePlot->setText(QString::fromStdString(tempPlot));
	ui.MovieReleaseDate->setText(QString::fromStdString(_movie->getReleaseDate()));

	std::string genres = _movie->getGenres()[0];
	for (int i = 1; i < _movie->getGenres().size(); i++)
		genres += ", " + _movie->getGenres()[i];
	ui.MovieGenres->setText(QString::fromStdString(genres));

	std::string directors = _movie->getDirectors()[0];
	for (int i = 1; i < _movie->getDirectors().size(); i++)
		genres += ", " + _movie->getDirectors()[i];
	ui.MovieDirectors->setText(QString::fromStdString(directors));

	for (int i = 0; i < _movie->getCast().size(); i++)
	{
		CustomActorListObject *actorItem = new CustomActorListObject;
		actorItem->setActor(_movie->getCast()[i]);
		actorItem->setText(QString::fromStdString(actorItem->getActor()->getName()));
		ui.MovieCast->addItem(actorItem);
	}


	//If the movie is a TVSerie, populate the episode list 
	TVSerie *tempMovie = dynamic_cast<TVSerie*>(_movie);
	if (tempMovie == nullptr)
		return;

	for (int i = 0; i < tempMovie->getListOfEpisodes().size(); i++)
	{
		CustomEpisodeListObject *episodeItem = new CustomEpisodeListObject;
		episodeItem->setEpisode(tempMovie->getListOfEpisodes()[i]);
		episodeItem->setText(QString::fromStdString(episodeItem->getEpisode()->getEpisodeName()));
		customEpisodeObjects.push_back(episodeItem);
		ui.EpisodesList->addItem(episodeItem);
	}
	ui.EpisodesList->setCurrentItem(customEpisodeObjects[0]);

	connect(ui.ViewEpisodeButton, SIGNAL(clicked()), parent, SLOT(openEpisodeInfoDialog()));

}

//Return selected episode from the list
Episode* MovieInfo::getSelectedEpisode()
{
	CustomEpisodeListObject *tempObject = dynamic_cast<CustomEpisodeListObject*>(ui.EpisodesList->currentItem());
	return tempObject->getEpisode();	
}

void MovieInfo::reject()
{
	delete this;
}

MovieInfo::~MovieInfo()
{
	for (auto object : customObjects)
		delete object;
	for (auto object : customEpisodeObjects)
		delete object;
}
