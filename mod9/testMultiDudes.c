/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:31 AM
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

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1; //Variable type SuperDude
    SuperDude copy;
    SuperDude ss[ASIZE]; //Creates an array of structure SuperDude
    InitInfoStruct(&s1); //Initialize variables
    //The address of SuperDude is passed so you must use & command to pass
    //the address instead of the value
    ShowInfoStruct(&s1); //Display variables
    copy = CopyInfoStruct(&s1); //copy catches returned values from CopyInfoStruct
    ShowInfoStruct(&copy); //Show what values were copied
    // Initialize your array of structs
    printf("New array info\n");
    for(int i = 0; i < ASIZE; ++i)
    {
    InitInfoStruct(&ss[i]);//Must include & even though its an array because each index has its own address
    UpdateInfoStruct(&ss[i], i * 10);
    printf("Position %d values:\n", i + 1);
    //ShowInfoStruct(&ss[i]); //Display struct info of array at index 0
    }
    //Display all members of the array with one function call
    ShowInfoAllStruct(ss);
    return 0;
}
// Function Definitions


