#include "TVSerie.h"



TVSerie::TVSerie()
{
}


TVSerie::~TVSerie()
{
}



void TVSerie::setListOfEpisodes(std::vector<Episode*> episodeList)
{
	listOfEpisodes = episodeList;
}

std::vector<Episode*> TVSerie::getListOfEpisodes() const
{
	return this->listOfEpisodes;
}