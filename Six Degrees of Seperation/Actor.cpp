#include "Actor.h"
#include "Movie.h"


Actor::Actor(std::string &init_name, Movie* init_movie)
{
	name = init_name;
	movies.push_back(init_movie);
}

Actor::~Actor()
{
}

//Getters
std::string Actor::getName() const
{
	return this->name;
}

std::vector<Movie*> Actor::getMovies() const
{
	return this->movies;
}


std::vector<Actor*> Actor::getAquintances() const
{
	return this->aquintances;
}

//Add movie to movies list in alphabetical order
void Actor::AddMovie(Movie* movie)
{
	std::vector<Movie*>::iterator it = std::upper_bound(movies.begin(), movies.end(), movie,
		[](Movie* a, Movie* b) { return a->getName() < b->getName(); });

	this->movies.insert(it, movie);
}

//Add aquintances if the array was empty in an alphabetical order
void Actor::AddAquintances()
{
	if (!aquintances.empty())
		return;
	for (auto movie : this->movies)
	{
		for (auto aquintance : movie->getCast())
		{
			if (aquintance != this)
			{
				auto it = std::lower_bound(this->aquintances.begin(), this->aquintances.end(), aquintance, [](Actor* a, Actor* b) { return a->getName() < b->getName(); });
				this->aquintances.insert(it, aquintance);
			}
		}
	}
	auto last = std::unique(this->aquintances.begin(), this->aquintances.end());
	aquintances.erase(last, this->aquintances.end());
}

//Check if aquintance exists
bool Actor::checkAquintanceExists(Actor* actor)
{
	bool found = std::binary_search(this->aquintances.begin(), this->aquintances.end(), actor, [](Actor* a, Actor* b) { return a->getName() < b->getName(); });
	return found;
}