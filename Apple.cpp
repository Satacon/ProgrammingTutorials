#include "Apple.h"

Apple::Apple()
{
	name = "apple";
	ripeness = randRange(1.0f, 3.0f);
	size = randRange(4.0f, 6.0f);
	appeal = randRange(5.0f, 10.0f);
	hp = size + ripeness;
}
