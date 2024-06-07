#include "Cherry.h"
#include "Random.h"

Cherry::Cherry()
{
	name = "cherry";
	ripeness = Random::randRange(3.0f,5.0);
	size = Random::randRange(1.0f,2.0f);
	appeal = Random::randRange(5.0f, 8.0f);
	hp = size + ripeness;

}