/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello(void); //No arguments, returns no value
void HelloMany(int num); //Has an argument still returns no value
int HelloNum(void); //Has no argument but returns a value
int HelloNumMany(int num); //Has argument and returns a value
int MySquare(int num); //Make a function to square a number

// Main Function
int main()
{
    Hello();
    Hello();
    HelloMany(3);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMany()\n", n);
    n = MySquare(3);
    printf("I got %d from MySquare(3)\n", n);

    return 0;
}
// Function Definitions
// Func: Hello prints the message
void Hello(void)
{
    printf("Hello World\n");
    return;
}
//Func: HelloMany prints message num times
void HelloMany(int num)
{
    int i;
    for(i = 0; i < num; ++i)
    {
        printf("Weber State, Weber State, Great, Great, Great!\n");
    }
    return;
}
// Func: HelloNum returns a number
int HelloNum(void)
{
    int num = 99;
    return num;
}
// Func: HelloNumMany takes an integer and returns sum of print statements
int HelloNumMany(int num)
{
    int i;
    int count = 0;
    for(i = 0; i < num; ++i)
    {
        printf("%d) Hello NumMany\n", i + 1);
        count++;
    }
    return (count);
}
//Will square a number
int MySquare(int n)
{
    n = n * n;
    return n;
}



