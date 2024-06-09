#include "Engine.h"
#include "Actor.h"
#include <iostream>

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
	Actor* testGuy = new Actor();
	// Initialize
	testGuy->initialize();

	// Main Loop
	std::string input = "";
	while (!gameShouldClose) {

		// Update
		testGuy->update();
		// Draw
		std::system("cls");
		testGuy->draw();
		// Get Input
		std::cout << "\n";
		std::cin >> input;
	}

	// Cleanup
	delete testGuy;
}	

bool Engine::gameShouldClose = false;