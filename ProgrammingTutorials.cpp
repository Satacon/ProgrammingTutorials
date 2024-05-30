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

    return newFruit;
}


//print the stats of the fruit and return its name
std::string inspectFruit(Fruit fruit) {
    //print fruit stats
    std::cout << fruit.name << ":\n";
    std::cout << "Ripeness: " << fruit.ripeness << ":\n";
    std::cout << "    Size: " << fruit.size << ":\n";
    std::cout << "  Appeal: " << fruit.appeal << ":\n";
    //return fruit name
    return fruit.name;
}

int main()
{
    
    std::cout << "Welcome to the orchard.\n\n";

    //Make a new fruit
    Fruit currentFruit = createFruit();
    string fruitName = "fruit";

    int input = -1;
   
    while (input != EXIT) { //formed like an if statement. dont put true or it will never end

        //clear the input buffer

        //print the menu
        std::cout << "Select an option:\n\n";
        std::cout << INSPECT <<": Inspect " << fruitName << "\n";
        std::cout << TWIST   <<": Twist.... nothing happens\n";
        std::cout << PICK    <<": Pick.... nothing happens\n";
        std::cout << EXIT    <<": Exit Program\n";
        std::cin >> input;

        switch (input) {

        //inspect the fruit
        case INSPECT:
            fruitName = inspectFruit(currentFruit);
            break;
        //twist the fruit
        case TWIST:
         
            break;
        //pick the fruit
        //pick the fruit
        case PICK:
          
            break;
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
