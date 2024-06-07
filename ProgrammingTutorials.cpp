// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PascalCase
// camelCase
// snake_case
// MACRO_CASE

#include <iostream>
#include <time.h>
#include <iomanip>
#include "Apple.h"
#include "Cherry.h"
#include "Random.h"


using namespace std;

//constant variables
const int INSPECT = 1;
const int TWIST = 2;
const int PICK = 3;
const int EXIT = 4;

//How to pick fruit
//pick fruit when hp value becomes 0
//when you twist fruit, reduces hp 
//size affects the max hp. hp is an equasion

int main()
{
   
    std::cout << setprecision(3);
    std::cout << "Welcome to the orchard.\n\n";     

    Random::seed();


    //Make a new fruit
    int fruitNumber = Random::randRange(0, 1);
    Fruit* currentFruit = new Fruit();
    switch (fruitNumber) {
    case 0:
        delete currentFruit;
        currentFruit = new Apple();
        break;
    case 1:
        delete currentFruit;
        currentFruit = new Cherry();
        break;
    default:
        currentFruit = new Fruit();
        currentFruit->name = "mystery fruit";
    }
    string currentName = "fruit";

    int input = -1;
   
    while (input != EXIT) { //formed like an if statement. dont put true or it will never end

        //print the menu
      
        std::cout << INSPECT <<": Inspect " << currentName << "\n";
        std::cout << TWIST   <<": Twist\n";
        std::cout << PICK    <<": Pick\n";
        std::cout << EXIT    <<": Exit Program\n\n";
        std::cout << "Select an option: ";
        std::cin >> input; 
        std::cout << "\n\n";

        switch (input) {

            //inspect the fruit
            //inspect the fruit
        case INSPECT:
            currentName = currentFruit->inspect();
            break;
            //twist the fruit
        case TWIST: {
            std::cout << "You twist forcefully yet delicately on the " << currentName << ".\n\n";
            float currentDamage = currentFruit->calculateDamage();
            currentFruit->hp -= currentDamage;
            std::cout << "The " << currentName << " takes " << currentDamage << " damage.\n";
        } break;
            //pick the fruit
            //pick the fruit
        case PICK: {
            int success = currentFruit->pick();
            std::cout << "You decisively reach out to pick the fruit.\n";
                if (success == 1) {
                    std::cout << "You got the fruit!\n\n";
                }
                else if (success == 2) {
                    std::cout << "You destroyed the fruit!\n\n";
                }
                else {
                    std::cout << "You failed to acquire fruit. Try something else.\n\n";
                }
        } break;
        }
        std::cout << "\n\n";

    }

    //Cleanup 
    delete currentFruit;
    currentFruit = nullptr; //Sets reference to null
   
    std::cout << "\nSee you soon!.\n";

}

