#include "Apple.h"
#include "Random.h"

Apple::Apple()
{
	name = "apple";
	ripeness = Random::randRange(1.0f, 3.0f);
	size = Random::randRange(4.0f, 6.0f);
	appeal = Random::randRange(5.0f, 10.0f);
	hp = size + ripeness;
}
