#include "CustomMovieListObject.h"



CustomMovieListObject::CustomMovieListObject()
{
}


CustomMovieListObject::~CustomMovieListObject()
{
}

Movie* CustomMovieListObject::getMovie() const
{
	return movieObject;
}

void CustomMovieListObject::setMovie(Movie* _movie)
{
	movieObject = _movie;
}