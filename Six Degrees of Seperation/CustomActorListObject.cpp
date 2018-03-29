#include "CustomActorListObject.h"



CustomActorListObject::CustomActorListObject()
{
}


CustomActorListObject::~CustomActorListObject()
{
}

Actor* CustomActorListObject::getActor() const
{
	return actorObject;
}

void CustomActorListObject::setActor(Actor* _actor)
{
	actorObject = _actor;
}