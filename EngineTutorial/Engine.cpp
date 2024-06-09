#include "Engine.h"
#include "Actor.h"
#include "Scene.h"
#include <iostream>
#include <conio.h>

Engine::Engine()
{
	gameShouldClose = false;
}

Engine::~Engine()
{
}

void Engine::run()
{
	//Construct objects
	Scene* map = new Scene();
	Actor* player = new Actor('P');
	Actor* npc = new Actor('N');
	npc->icon = '#';	
	map->add(player);
	map->add(npc);
	player->x = 2;
	player->y = 3;

	// Main Loop
	while (!gameShouldClose && input!= 27) {

		// Update
		map->update();
		// Draw
		std::system("cls");
		map->draw();
		// Get Input
		std::cout << "\n";
		input = _getch();
	}

	// Cleanup
	delete map;
	delete player;
	delete npc;
}	

bool Engine::gameShouldClose = false;
char Engine::input = NULL;