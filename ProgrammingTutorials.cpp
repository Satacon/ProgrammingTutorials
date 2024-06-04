// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PascalCase
// camelCase
// snake_case
// MACRO_CASE

#include <iostream>
#include <time.h>
#include <iomanip>
#include "Fruit.h"


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
    //Where the heck is the seed? We found the seed.

    srand(time(0));
    rand(); 

    //Make a new fruit
    //anytime you see NEW, you allocate some memory. Creates a new variable that stores the address of data.
    Fruit* currentFruit = new Fruit(); //Constructor is instructions for initialization
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

    //Cleanup 
    delete currentFruit;
    currentFruit = nullptr; //Sets reference to null
   
    //It is easy to check if something is nullptr
    //If (currentFruit == nullptr) 
    //return;

    //if (!currentFruit)
    //return;

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
