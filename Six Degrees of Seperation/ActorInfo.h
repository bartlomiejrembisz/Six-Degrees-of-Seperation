#pragma once
#include "ui_ActorInfoDialog.h"
#include "CustomMovieListObject.h"
#include "CustomActorListObject.h"

class ActorInfo : public QDialog
{
public:
	ActorInfo(QWidget *parent, Actor* _actor);
	void reject() override;
	~ActorInfo();

private:
	Ui::ActorInfoDialog ui;

	std::vector<CustomActorListObject*> customActorObjects;
	std::vector<CustomMovieListObject*> customMovieObjects;
};

