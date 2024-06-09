#include "Scene.h"
#include <iostream>

Scene::Scene()
{
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			grid[x][y] = nullptr;
		}
	}
}

Scene::~Scene()
{
}

void Scene::update()
{
	// Update each actor
	for (Actor* actorToUpdate : actors) {
		actorToUpdate->update();
	}

	// Place each actor on the grid
	for (Actor* actorToUpdate : actors) {
		if (actorToUpdate->x >= 0 && actorToUpdate->y >= 0 && actorToUpdate->y < HEIGHT)
		{
			grid[actorToUpdate->x][actorToUpdate->y] = actorToUpdate;
		}
	}
}

void Scene::draw()
{
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			// If the element is an actor, 
			if (grid[x][y] != nullptr) {
				//Draw that actor
				grid[x][y]->draw();
			}
			else {
				// Otherwise
				//Draw an empty space
				std::cout << '_';
			}
			// Clear the space
			grid[x][y] = nullptr;
		}
		// Go to next row
		std::cout << '\n';
	}
}

void Scene::add(Actor* actorToAdd)
{
	// Add the actor to the back of the list
	actors.push_back(actorToAdd);
}
