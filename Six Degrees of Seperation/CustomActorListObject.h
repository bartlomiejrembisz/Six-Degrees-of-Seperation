#pragma once
#include "qlistwidget.h"
#include "Actor.h"

class CustomActorListObject :
	public QListWidgetItem
{
public:
	CustomActorListObject();
	~CustomActorListObject();

	Actor* getActor() const;
	void setActor(Actor* _actor);

private:
	Actor* actorObject;
};

