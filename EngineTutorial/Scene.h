#pragma once
#include "Actor.h"
#include <list>

class Scene
{
public:
	Scene();
	~Scene();

	void update();

	void draw();

	void add(Actor* actorToAdd);

public:
	static const unsigned int WIDTH  = 16;
	static const unsigned int HEIGHT = 16;

private:
	std::list<Actor*> actors;
	Actor* grid[WIDTH][HEIGHT];
};

