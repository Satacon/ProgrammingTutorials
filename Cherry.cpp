#include "Cherry.h"

Cherry::Cherry()
{
	name = "cherry";
	ripeness = randRange(3.0f,5.0);
	size = randRange(1.0f,2.0f);
	appeal = randRange(5.0f, 8.0f);
	hp = size + ripeness;

}