#include "Actor.h"
#include <iostream>

Actor::Actor(char symbol)
{
	icon = symbol;
}

Actor::~Actor()
{
}

void Actor::update()
{

}

void Actor::draw()
{
	std::cout << icon;
}
