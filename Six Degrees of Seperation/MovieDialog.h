#pragma once
#include <QtWidgets/qdialog.h>
#include "ui_MovieDialog.h"
#include "MovieInfo.h"
#include "CustomMovieListObject.h"

namespace Ui
{
	class MovieDialog;
}

class MovieDialog :
	public QDialog
{
public:
	MovieDialog::MovieDialog(QWidget *parent, std::vector<Movie*> *movieList);
	void reject() override;
	~MovieDialog();

	Movie* getSelectedMovie();

private:
	Ui::MovieDialogClass ui;

	std::vector<CustomMovieListObject*> customObjects;
};

