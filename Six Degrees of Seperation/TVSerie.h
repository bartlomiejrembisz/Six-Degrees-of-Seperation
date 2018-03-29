#pragma once
#include "Movie.h"
#include <vector>
#include "Episode.h"

class TVSerie :
	public Movie
{
private:
	std::vector<Episode*> listOfEpisodes;
public:
	TVSerie();
	~TVSerie();

	void setListOfEpisodes(std::vector<Episode*> episodeList);
	std::vector<Episode*> getListOfEpisodes() const;
};

