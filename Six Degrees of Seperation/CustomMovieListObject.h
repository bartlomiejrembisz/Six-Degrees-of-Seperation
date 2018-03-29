#pragma once
#include "qlistwidget.h"
#include "Movie.h"

class CustomMovieListObject :
	public QListWidgetItem
{
public:
	CustomMovieListObject();
	~CustomMovieListObject();

	Movie* getMovie() const;
	void setMovie(Movie* _movie);

private:
	Movie* movieObject;

};

