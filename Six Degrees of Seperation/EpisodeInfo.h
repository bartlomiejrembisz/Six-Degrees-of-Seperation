#pragma once
#include "qdialog.h"
#include "ui_EpisodeInfoDialog.h"
#include "Episode.h"


class EpisodeInfo :
	public QDialog
{
public:
	EpisodeInfo(QWidget *parent, Episode* _episode);
	~EpisodeInfo();

private:
	Ui::EpisodeInfoDialog ui;
};

