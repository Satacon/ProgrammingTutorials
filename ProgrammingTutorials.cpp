// ProgrammingTutorials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 2 + 4;

    bool isHigh = x >= 10;  //name bool value in a logical way that explains


    // Exmple of if statement conditions
    // < less than  
    // > greater than   
    // == equal to
    // != not equal to  
    // <= less than or equal to
    // >= greater than or equal to

    if (!isHigh) {
        cout << "x is not greater than or equal to 10\n\n";
    }
    else {
        cout << "x is not less than ten\n\n";
    }

    if (true) { //you can chain if statements together

    }
    else if (false) {

    }
    else {

    }

    if (int w = 10 + 4) { // unlikely to need this, but you can declare a variable inside the if statement condition

        cout << w << "\n";
    }

    if (x == 10) { //== tests equivalence

        cout << "True\n\n"; // This will never be true
    }
    else {
        int z = 20;
        cout << z << "\n";
        cout << "False\n\n";
        
    }
    
    


    //cout << z << "\n"; doesnt work due to z out of scope
    cout << "End of Program\n";
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
