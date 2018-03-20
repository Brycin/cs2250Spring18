/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:34 AM
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
struct Dude
{
    int age;
    double weight;
}; //DO NOT forget the ;
typedef struct SuperDude //Type def creates a new type of variable
{
    int age;
    double weight;
    char sex;
}SuperDude; //This tells you how to call the structure.
            //No longer have to add struct to call from main

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd); //Passes variable sd as type SuperDude structure
                                   //Structure definitions must come before fuctions

// Main Function
int main()
{
    int a = 28; // a is variable type int
    double w = 190.5; // w is variable type double
    ShowInfo(a, w);

    struct Dude man1; //man1 is variable type struct Dude
    man1.age = 32; // use dot operator to access members of the structure
    man1.weight = 172.3;
    ShowInfo(man1.age, man1.weight);

    SuperDude man2; //Able to make new variable without keyword struct
    man2.age = 45;
    man2.weight = 278.6;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.1f]\n", weight);
    return;
}

    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  ShowInfoStruct
     *  Description:  Displays SuperDude Info
     * =====================================================================================
     */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.1f]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);
    return;
}

