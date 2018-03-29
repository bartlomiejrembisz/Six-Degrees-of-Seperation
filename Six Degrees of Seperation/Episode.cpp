#include "Episode.h"



Episode::Episode()
{
}


Episode::~Episode()
{
}

//Setters
void Episode::setEpisodeName(std::string _episodeName)
{
	this->episodeName = _episodeName;
}

void Episode::setAirDate(std::string _airDate)
{
	this->airDate = _airDate;
}

void Episode::setEpisodePlot(std::string _episodePlot)
{
	this->episodePlot = _episodePlot;
}

void Episode::setEpisodeNumber(int _episodeNumber)
{
	this->episodeNumber = _episodeNumber;
}

void Episode::setSeasonNumber(int _seasonNumber)
{
	this->seasonNumber = _seasonNumber;
}

//Getters
std::string Episode::getEpisodeName() const
{
	return this->episodeName;
}

std::string Episode::getAirDate() const
{
	return this->airDate;
}

std::string Episode::getEpisodePlot() const
{
	return this->episodePlot;
}

int Episode::getEpisodeNumber() const
{
	return this->episodeNumber;
}

int Episode::getSeasonNumber() const
{
	return this->seasonNumber;
}