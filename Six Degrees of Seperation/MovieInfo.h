#pragma once
#include <QtWidgets/qdialog.h>
#include "ui_MovieInfoDialog.h"
#include "CustomActorListObject.h"
#include "CustomEpisodeListObject.h"
#include "TVSerie.h"

class MovieInfo : public QDialog
{
public:
	MovieInfo(QWidget *parent, Movie* _movie);
	Episode * getSelectedEpisode();
	void reject() override;
	~MovieInfo();

private:
	Ui::MovieInfoDialog ui;

	std::vector<CustomActorListObject*> customObjects;
	std::vector<CustomEpisodeListObject*> customEpisodeObjects;
};

