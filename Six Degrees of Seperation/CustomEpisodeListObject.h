#pragma once
#include "qlistwidget.h"
#include "Episode.h"

class CustomEpisodeListObject :
	public QListWidgetItem
{
public:
	CustomEpisodeListObject();
	~CustomEpisodeListObject();

	Episode* getEpisode() const;
	void setEpisode(Episode* _episode);

private:
	Episode* episodeObject;
};

