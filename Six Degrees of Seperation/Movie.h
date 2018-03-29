#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <vector>
#include <algorithm>

//Forward declaring of class Actor to escape the circular dependency
class Actor;

class Movie
{
protected:
	std::string name;
	std::vector<Actor*> movieCast;
	std::string releaseDate;
	std::string plot;
	std::vector<std::string> genres;
	unsigned short rating;
	std::vector<std::string> directors;

public:
	Movie();
	virtual ~Movie();

	//Getters
	std::string getName() const;
	std::vector<Actor*>getCast() const;
	std::string getReleaseDate() const;
	std::string getPlot() const;
	std::vector<std::string> getGenres() const;
	unsigned short getRating() const;
	std::vector<std::string> getDirectors() const;

	//Setters
	void setName(std::string &movieName);
	void setReleaseDate(std::string &_releaseDate);
	void setPlot(std::string &_plot);
	void setGenres(std::vector<std::string> _genres);
	void setRating(short _rating);
	void setDirectors(std::vector<std::string> _directors);

	void AddCast(Actor* actor);
};

#endif