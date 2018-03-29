#include "CustomEpisodeListObject.h"



CustomEpisodeListObject::CustomEpisodeListObject()
{
}


CustomEpisodeListObject::~CustomEpisodeListObject()
{
}

Episode * CustomEpisodeListObject::getEpisode() const
{
	if (episodeObject == nullptr)
		return NULL;
	return episodeObject;
}

void CustomEpisodeListObject::setEpisode(Episode * _episode)
{
	episodeObject = _episode;
}
