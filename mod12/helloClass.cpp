/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  First Class in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  //For C
#include <iostream>   //For C++
using namespace std;  //For C++

// Constants
class HelloNum
{
    // Only the developer can see the private section
    private:
        int number;

    //The User has access to the public section by writing Methods (Functions) in C++
    public:
        void SetNumber(int n);  //Setter
        int GetNumber();        //Getter
        void ShowNumber();      //Prototypes

};

// Function Prototypes

// Main Function
int main()
{
    int num;
    // n1 is an instance of the class HelloNum
    HelloNum n1; //Object
    n1.SetNumber(95);
    num = n1.GetNumber(); //Creates a copy of number from HelloNum class
    cout << "Your num is: " << num << endl;
    num *= 2;
    cout << "Your num doubled is " << num << endl;
    cout << "Original num ";
    n1.ShowNumber();

    return 0;
}
// Function Definitions

//HelloNum can only access the private member through functions called methods
//The access operator is ::
//HelloNum uses SetNumber to access and initialize n1 (private member number)
void HelloNum::SetNumber(int n)
{
    //Set private member
    number = n;
    return;
}

int HelloNum::GetNumber()
{
    //Returns the private member
    return number;
}

void HelloNum::ShowNumber() //Means ShowNumber method belongs to class HelloNum
{
    cout << "Your number is " << number << endl;
    return;
}

