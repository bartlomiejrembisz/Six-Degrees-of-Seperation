#pragma once
#include <string>

class Episode
{
private:
	std::string episodeName;
	std::string airDate;
	std::string episodePlot;
	int episodeNumber;
	int seasonNumber;

public:
	Episode();
	~Episode();

	void setEpisodeName(std::string _episodeName);
	void setAirDate(std::string _airDate);
	void setEpisodePlot(std::string _episodePlot);
	void setEpisodeNumber(int _episodeNumber);
	void setSeasonNumber(int _seasonNumber);

	std::string getEpisodeName() const;
	std::string getAirDate() const;
	std::string getEpisodePlot() const;
	int getEpisodeNumber() const;
	int getSeasonNumber() const;
};

