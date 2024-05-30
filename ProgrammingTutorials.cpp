// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PascalCase
// camelCase
// snake_case
// MACRO_CASE


#include <iostream>
using namespace std;

//constant variables
const int PRINT = 1;
const int PRINT_MANY = 2;
const int ENTER_PHRASE = 3;
const int EXIT = 4;


void printChar(char c) {
    std::cout << c;
}

void printA() {
    printChar('A');
}


void printString(string phrase) {
    std::cout << phrase;
}


int main()
{
    
    std::cout << "Welcome to the show.\n\n";

    int input = -1;
    string phrase = "A";
    while (input != EXIT) { //formed like an if statement. dont put true or it will never end

        //clear the input buffer

        //print the menu
        std::cout << "Select an option:\n\n";
        std::cout << PRINT          <<": Print " << phrase << "\n";
        std::cout << PRINT_MANY     <<": Print " << phrase << "x1000\n";
        std::cout << ENTER_PHRASE   <<": Enter phrase\n";
        std::cout << EXIT           <<": Exit Program\n";
        std::cin >> input;

        switch (input) {
        case PRINT:
            printString(phrase);
            break;

        case PRINT_MANY:
            for (int i = 0; i < 1000; i++) { //i=i+1//i+=1//i++ all work the same
                printString(phrase);
            }
            break;

        case ENTER_PHRASE:
            std::cout << "Enter a phrase: ";
            std::cin >> phrase;
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
