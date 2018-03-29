#include "MovieDialog.h"


MovieDialog::MovieDialog(QWidget *parent, std::vector<Movie*> *movieList)
{
	//initialise ui and populate the list
	ui.setupUi(this);

	for (int i = 0; i < movieList->size(); i++)
	{
		CustomMovieListObject *movieItem = new CustomMovieListObject;
		movieItem->setMovie((*movieList)[i]);
		movieItem->setText(QString::fromStdString(movieItem->getMovie()->getName()));
		ui.MoviesList->addItem(movieItem);
	}
	connect(ui.ViewMovieButton, SIGNAL(clicked()), parent, SLOT(viewMovie()));
}

void MovieDialog::reject()
{
	delete this;
}


MovieDialog::~MovieDialog()
{
	for (auto object : customObjects)
		delete object;
}

//Return selected movie from the list
Movie* MovieDialog::getSelectedMovie()
{
	CustomMovieListObject *tempObject = dynamic_cast<CustomMovieListObject*>(ui.MoviesList->currentItem());
	Movie* newMovie = tempObject->getMovie();
	return newMovie;
}
