#include "EpisodeInfo.h"



EpisodeInfo::EpisodeInfo(QWidget *parent, Episode* _episode)
{
	//initialise UI and set the information label to episode information
	ui.setupUi(this);

	std::string episodeInfo = "Episode name: " + _episode->getEpisodeName() + "\n";
	episodeInfo += "Episode number: " + std::to_string(_episode->getEpisodeNumber()) + "\n";
	episodeInfo += "Episode air date: " + _episode->getAirDate() + "\n";
	int tempSize = episodeInfo.size();
	episodeInfo += "Episode plot: " + _episode->getEpisodePlot() + "\n";
	if (episodeInfo.size() - tempSize > 90)
		episodeInfo.insert(tempSize + 90, "\n");
	episodeInfo += "Season number : " + std::to_string(_episode->getSeasonNumber()) + "\n";


	ui.EpisodeInfoLabel->setText(QString::fromStdString(episodeInfo));
}


EpisodeInfo::~EpisodeInfo()
{
}
