#include "Random.h"
#include <random>

void Random::seed()
{
	srand(time(0));
	int r = rand();
}

int Random::randRange(int min, int max)
{
	int range = max - min + 1;
	return  (rand() % range) + min;
}

float Random::randRange(float min, float max)
{
	float number = (float)rand() / (float)RAND_MAX;
	float range = max - min;
	return (number * range) + min;
}
