// File IO Google Home Jessica Monize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void myMemoryBot()
{
    fstream f;
    string yourName;
    string nameStr;
    char usrInput;
    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+\n";
    cout << "\t|Welcome to My Memory Bot|" << endl;
    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+\n";
    cout << "For read, enter 'r'. For Write, enter 'w'." << endl;
    cin >> usrInput; //begin user input code
    if (usrInput == 'r') //code for reading the file
    {
        f.open("myMemoryBotTxt", ios::in);
        string str;
        while (getline(f, str))
        {
            cout << str << endl;
        }
        f.close();
    }
    else { //code for writing the file
        f.open("myMemoryBotTxt", ios::out | ios::in | ios::app);
        cout << "To use My Memory Bot, type in a keyword such as name, place, age, etc." << endl;
        cout << "Lets get started! Enter first a keyword " << endl;
        cin >> nameStr;
        nameStr.append(" ");
        cout << "Now a value" << endl;
        cin >> yourName;
        nameStr.append(yourName);
        nameStr.append("\n");
        cout << "You typed in " << nameStr << endl;
        f << nameStr;
        f.close();
    }
}

int main()
{
 
    char ui;
    while (true)
    {
        myMemoryBot(); //would you like to replay?
        cout << "do you want to continue 'y' for yes" << endl;
        cin >> ui;
        if (ui != 'y')
        {
            break;
        }

    }
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
