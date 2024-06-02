#include "Fruit.h"
#include <iostream>

Fruit::Fruit()
{
    name = names[randRange(0, 6)];
    ripeness = randRange(1.0f, 3.0f);
    size = randRange(5.0f, 10.f);
    appeal = randRange(1.0f, 3.0f);
    hp = size + ripeness;
}

int Fruit::randRange(int min, int max)
{
	int range = max - min + 1;
	return  (rand() % range) + min;
}

float Fruit::randRange(float min, float max)
{
	float number = (float)rand() / (float)RAND_MAX;
	float range = max - min;
	return (number * range) + min;
}

std::string Fruit::inspect()
{
    //prints the stats of the fruit
    std::cout << "Name:     " << name << "\n";
    std::cout << "Ripeness: " << ripeness << "\n";
    std::cout << "Size:     " << size << "\n";
    std::cout << "Appeal:   " << appeal << "\n";
    std::cout << "HP:       " << hp << "\n";
    return name;
}

float Fruit::calculateDamage()
{
    float damage = 1 + size / appeal;
    return damage;
}

int Fruit::pick()
{
    //Fruit has been obliterated, took too much damage
    if (hp <= 0) {
        return 2;
    }
    //Fruit is in the perfect range to be picked, 
    else if (hp < 1) {
        return 1;
    }
    //Fruit is not weakened enough, needs damage
    else {
        return 0;
}
