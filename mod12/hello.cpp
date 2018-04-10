/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
#include <iostream>    // For C++
using namespace std;   //For C++ standard name (Specifies what name space you are using)

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;    Must use this format if you don't have line 20
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " years old" << endl;
    cout << "What is your name?" << endl;
    //cin >> name;   //This will take input up to the first space
    //cout << "Hello " << name << endl;
    //TODO: Take care of the enter key from previous enter key
    cin.ignore(); //Gets rid of extra ENTER key from previous input
    getline(cin, name);   //This will take all input including spaces uses cin function and stores it in name
    cout << "Hello " << name << endl;


    return 0;
}
// Function Definitions


