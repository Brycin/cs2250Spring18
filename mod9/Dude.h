/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  Library for testDude.c
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
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


#endif /* ----- #ifndef DUDE__INC__ ----- */

