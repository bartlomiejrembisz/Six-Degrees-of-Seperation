#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_SixDegreesofSeperation.h"
#include "MovieDialog.h"
#include "ActorDialog.h"
#include "SeperationDialog.h"
#include "EpisodeInfo.h"
#include <Movie.h>
#include <BFS.h>
#include <TVSerie.h>
#include <qmessagebox.h>

class SixDegreesofSeperation : public QMainWindow
{
    Q_OBJECT



public:
    SixDegreesofSeperation(QWidget *parent = Q_NULLPTR);

private:
	//BFS variables
	Actor* firstActor = nullptr;
	Actor* secondActor = nullptr;

	//UI classes
	Ui::SixDegreesofSeperationClass ui;
	ActorDialog *actorsDialog;
	MovieDialog *movieDialog;
	SeperationDialog *seperationDialog;
	MovieInfo *newMovie;
	ActorInfo *newActor;

	//Variables
	bool dataLoaded = false;
	std::vector<Movie*> *movieList;
	std::vector<Actor*> *actorList;

	Movie* getMovieAddress(std::string &movieName);
	Actor* getActorAddress(std::string &actorName);

	void AddMovie(Movie* movie);
	void AddActor(Actor* actor);

	void loadMovieList();
	std::vector<std::string> GetFiles(const std::wstring& init_path);

private slots:
	void exitApp();
	void openMoviesDialog();
	void openActorsDialog();
	void openSeperationDialog();
	void openEpisodeInfoDialog();
	void viewMovie();
	void viewActor();
	void setFirstActor();
	void setSecondActor();
	void beginSearch();
};
