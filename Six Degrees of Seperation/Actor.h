#ifndef ACTOR_H
#define ACTOR_H

#include "Movie.h"
#include <algorithm>


class Actor
{
private:
	std::string name;

	std::vector<Movie*> movies;
	std::vector<Actor*> aquintances;

	bool Actor::checkAquintanceExists(Actor* actor);

public:
	Actor(std::string &init_name, Movie* init_movie);
	~Actor();

	std::string getName() const;
	std::vector<Movie*> getMovies() const;
	std::vector<Actor*> getAquintances() const;

	void AddMovie(Movie* movie);
	void AddAquintances();


};

#endif