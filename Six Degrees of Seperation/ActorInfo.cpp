#include "ActorInfo.h"



ActorInfo::ActorInfo(QWidget *parent, Actor* _actor)
{
	//set up UI
	ui.setupUi(this);

	//Populating the fields
	ui.ActorNameLabel->setText(QString::fromStdString(_actor->getName()));
	
	_actor->AddAquintances();
	for (int i = 0; i < _actor->getAquintances().size(); i++)
	{
		CustomActorListObject *actorItem = new CustomActorListObject;
		actorItem->setActor(_actor->getAquintances()[i]);
		actorItem->setText(QString::fromStdString(actorItem->getActor()->getName()));
		ui.AquintancesList->addItem(actorItem);
	}

	for (int i = 0; i < _actor->getMovies().size(); i++)
	{
		CustomMovieListObject *movieItem = new CustomMovieListObject;
		movieItem->setMovie(_actor->getMovies()[i]);
		movieItem->setText(QString::fromStdString(movieItem->getMovie()->getName()));
		ui.MovieList->addItem(movieItem);
	}
}
void ActorInfo::reject()
{
	delete this;
}

ActorInfo::~ActorInfo()
{
	for (auto object : customActorObjects)
		delete object;
	for (auto object : customMovieObjects)
		delete object;
}
