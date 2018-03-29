#include "BFS.h"



BFS::BFS()
{
	
}

std::vector<Actor*> BFS::search(Actor* source, Actor* destination, int boundary)
{
	std::vector<Actor*> path;
	queue.push(source);
	visited->push_back(source);

	if (source == destination)
	{
		path.push_back(source);
		return path;
	}

	while (!queue.empty())
	{
		if (visited->size() == boundary) //If the visited size equals to the number of all actors, means there is no match, therefore return empty array.
			return {};
		Actor* actor = queue.front();
		addVisited(actor);
		queue.pop();

		//Populate aquintances list
		actor->AddAquintances();
		std::vector<Actor*> aquintances = actor->getAquintances(); //Get actor aquintances
		for (auto neighbour : aquintances)
		{
			path.push_back(neighbour);
			path.push_back(actor);

			//True if connection was found, therefore it returns a parsed version of the shortest path
			if (neighbour == destination)
			{
				return parseVisited(source, destination, path);
			}
			else //False if not found, continue the search
			{
				if (!Traversed(neighbour))
					queue.push(neighbour);
			}
		}
	}
	return {};
}


BFS::~BFS()
{
	delete visited;
}

//check if already traversed
bool BFS::Traversed(Actor* actor)
{
	bool traversed = std::binary_search(visited->begin(), visited->end(), actor, [](Actor* b, Actor* a) { return a->getName() < b->getName(); });
	return traversed;
}

//add visited in alphabetical order
void BFS::addVisited(Actor* actor)
{
	auto it = std::lower_bound(visited->begin(), visited->end(), actor,
		[](Actor* a, Actor* b) { return a->getName() < b->getName(); });
	if ((it != this->visited->end()) && ((*it) != actor))
	{
		visited->insert(it, actor);
	}
	else if ((visited->size() == 0))
	{
		visited->push_back(actor);
	}
}

//Parse the path and extract shortest path
std::vector<Actor*> BFS::parseVisited(Actor* src, Actor* destination, std::vector<Actor*> path)
{
	auto iterator = std::find(path.begin(), path.end(), destination);
	Actor* source = path[std::distance(path.begin(), iterator) + 1];

	shortestPath.insert(shortestPath.begin(), destination);
	
	if (source == src)
	{
		shortestPath.insert(shortestPath.begin(), src);
		return shortestPath;
	}
	else
	{
		return parseVisited(src, source, path);
	}

	return{};
}
