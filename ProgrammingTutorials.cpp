// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int input = -1;

    cout << "Welcome to the show.\n\n";

    while (input != 3) { //formed like an if statement. dont put true or it will never end

        //clear the input buffer

        //print the menu
        cout << "Select an option:\n\n";
        cout << "1: Print A\n";
        cout << "2: Print Ax1000\n";
        cout << "3: Exit Program\n";
        cin >> input;

        //Option 1
        if (input == 1) {
            cout << "A\n\n";
        }

        //Option 2
        else if (input == 2) {
            // for loops initialization; condition; incrementation; 
            for (int i = 0; i < 1000; i++) { //i=i+1//i+=1//i++ all work the same
                cout << "A";
            }
            cout << "\n\n";
        }
    }
    cout << "\nI'm done with you.\n";

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
