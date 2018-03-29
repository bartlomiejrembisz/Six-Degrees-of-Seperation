#ifndef BFS_H
#define BFS_H

#include "Actor.h"
#include <queue>

class BFS
{
private:
	std::queue<Actor*> queue;
	std::vector<Actor*> *visited = new std::vector<Actor*>;
	std::vector<Actor*> shortestPath;

	bool found;

	void addVisited(Actor* actor);
	std::vector<Actor*> parseVisited(Actor* source, Actor* destination, std::vector<Actor*> pth);
	bool Traversed(Actor* actor);

public:
	BFS::BFS();
	~BFS();

	std::vector<Actor*> search(Actor* source, Actor* destination, int boundary);
};

#endif