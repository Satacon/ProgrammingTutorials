// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PascalCase
// camelCase
// snake_case
// MACRO_CASE

#include <iostream>
#include "Fruit.h"

using namespace std;

//constant variables
const int INSPECT = 1;
const int TWIST = 2;
const int PICK = 3;
const int EXIT = 4;

Fruit createFruit() {
    Fruit newFruit;
    newFruit.name = "Peach";
    newFruit.ripeness = 5.0f;
    newFruit.size = 4.0f;
    newFruit.appeal = 7.0f;
    newFruit.hp = newFruit.size;

    return newFruit;
}

//How to pick fruit
//pick fruit when hp value becomes 0
//when ripeness hits 10, the fruit falls off the branch and is lost
//when you twist fruit, appeal drops by one, appeal affects the score, hp drops by one
//size affects the max hp. hp is an equasion

//print the stats of the fruit and return its name
std::string inspectFruit(Fruit fruit) {
    //print fruit stats
    std::cout << "Name:     " << fruit.name << ":\n";
    std::cout << "Ripeness: " << fruit.ripeness << ":\n";
    std::cout << "Size:     " << fruit.size << ":\n";
    std::cout << "Appeal:   " << fruit.appeal << ":\n";
    std::cout << "HP:       " << fruit.hp << ":\n";
    //return fruit name
    return fruit.name;
}


//pass in a parameter Fruit variable 
float calculateDamage(Fruit damagedFruit) {
    float damage = 1 + damagedFruit.size / damagedFruit.appeal;
    return damage;
}

//Return 0 if fruit hasnt taken enough damage
//Return 1 if fruit is in the perfect range for picking
//Return 2 if fruit has taken too much damage
int pickFruit(Fruit pickedFruit) {
    //Fruit has been obliterated, took too much damage
    if (pickedFruit.hp <= 0) {
        return 2;
    }
    //Fruit is in the perfect range to be picked, 
    else if (pickedFruit.hp < 1) {
        return 1;
    }
     //Fruit is not weakened enough, needs damage
    else {
        return 0;

    }
}

int main()
{
    
    std::cout << "Welcome to the orchard.\n\n";

    //Make a new fruit
    Fruit currentFruit = createFruit();
    string currentName = "fruit";


    int input = -1;
   
    while (input != EXIT) { //formed like an if statement. dont put true or it will never end

        //clear the input buffer

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
        case INSPECT:
            currentName = inspectFruit(currentFruit);
            break;
            //twist the fruit
        case TWIST: {
            std::cout << "You twist forcefully yet delicately on the " << currentName << ".\n\n";
            float currentDamage = calculateDamage(currentFruit);
            currentFruit.hp -= currentDamage;
            std::cout << "The " << currentName << " takes " << currentDamage << " damage.\n";
        } break;
            //pick the fruit
            //pick the fruit
        case PICK: {
            int success = pickFruit(currentFruit);
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

        ////Option 1
        //if (input == PRINT) {
        //    printString(phrase);
        //}

        ////Option 2
        //else if (input == PRINT_MANY) {
        //    // for loops initialization; condition; incrementation; 
        //    for (int i = 0; i < 1000; i++) { //i=i+1//i+=1//i++ all work the same
        //        printString(phrase);
        //    }
        //    
        //}
        ////Option 3
        //else if (input == ENTER_PHRASE) {
        //    std::cout << "Enter a phrase: ";
        //    std::cin >> phrase;
        //}
        
       /* std::cout << "\n\n";*/
    }
    std::cout << "\nI'm done with you.\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
