#include "Fruit.h"
#include "Random.h"
#include <iostream>


//Constructor of default fruit
Fruit::Fruit()
{
    name = names[Random::randRange(0, 6)];
    ripeness = Random::randRange(1.0f, 5.0f);
    size = Random::randRange(3.0f, 10.f);
    appeal = Random::randRange(1.0f, 10.0f);
    hp = size + ripeness;
}

Fruit::~Fruit()
{
    // The destructor is called when the object is deleted.
    // Generally, the object that allocates memory must also delete that memory
    // In other words the object that calls new should also call delete.
    // The destructor is the place where delete is typically called.
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
    float damage = (appeal / Random::randRange(2.0f, 4.0f));
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
}
