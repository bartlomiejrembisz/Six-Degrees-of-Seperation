#include "Movie.h"
#include "Actor.h"

Movie::Movie()
{
	this->name = "";
	this->movieCast = {};
	this->releaseDate = "";
	this->plot = "";
	this->genres = {};
	this->rating = 0;
	this->directors = {};
}

Movie::~Movie()
{
	delete this;
}

//Getters

std::string Movie::getName() const
{
	return this->name;
}

std::vector<Actor*> Movie::getCast() const
{
	return this->movieCast;
}

std::string Movie::getReleaseDate() const
{
	return this->releaseDate;
}

std::string Movie::getPlot() const
{
	return this->plot;
}

std::vector<std::string> Movie::getGenres() const
{
	return this->genres;
}

unsigned short Movie::getRating() const
{
	return this->rating;
}

std::vector<std::string> Movie::getDirectors() const
{
	return this->directors;
}

//Setters

void Movie::setName(std::string &movieName)
{
	this->name = movieName;
}
void Movie::setReleaseDate(std::string &_releaseDate)
{
	this->releaseDate = _releaseDate;
}
void Movie::setPlot(std::string &_plot)
{
	this->plot = _plot;
}
void Movie::setGenres(std::vector<std::string> _genres)
{
	this->genres = _genres;
}
void Movie::setRating(short _rating)
{
	this->rating = _rating;
}
void Movie::setDirectors(std::vector<std::string> _directors)
{
	this->directors = _directors;
}

void Movie::AddCast(Actor* actor)
{
	std::vector<Actor*>::iterator it = std::upper_bound(std::begin(movieCast), std::end(movieCast), actor,
		[](Actor* a, Actor* b) { return a->getName() < b->getName(); });

	this->movieCast.insert(it, actor);
}
