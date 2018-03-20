/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Constants

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
void ShowInfoStruct(const SuperDude* sd) //Passes a const address instead of value
                                         //Values cannot be modified
                                         //This makes processing faster
{
    printf("Your age is [%d]\n", sd->age);
    printf("Your weight is [%.1f]\n", sd->weight);
    printf("Your sex is [%c]\n", sd->sex);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitInfoStruct
 *  Description:  Initializes structures values
 * =====================================================================================
 */
void InitInfoStruct(SuperDude* sd) //address of SuperDude is passed
                                  // sd is now a pointer
{
    sd->age = -99;      //When using the address of a structure use the -> operator to access
    sd->weight = -99;   //The struct member instead of the . operator which is used when you
    (*sd).sex = 'N';    //Have the structure not the address. (*sd).sex is another way to do 
    return;             //this same thing by dereferencing. This allows you to access value at the address
                        //-> and (*sd) are equivalent but -> is easier to remember
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CopyInfoStruct
 *  Description:  Copies SuperDude
 * =====================================================================================
 */
SuperDude CopyInfoStruct(const SuperDude* sd)
{
    SuperDude tempVals;
    tempVals.age = sd->age;
    tempVals.weight = sd->weight;
    tempVals.sex = sd->sex;

    return tempVals;
}
