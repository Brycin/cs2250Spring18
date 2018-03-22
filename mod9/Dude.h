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

//Constants
//#define ASIZE 3 //Can use this instead of Static const....
static const int ASIZE = 3;

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(const SuperDude* sd); //Passes variable sd as type SuperDude structure
                                   //Structure definitions must come before fuctions
void InitInfoStruct(SuperDude* sd); //Pass address of SuperDude type
SuperDude CopyInfoStruct(const SuperDude* sd);//This creates a function that returns a SuperDude structure
void UpdateInfoStruct(SuperDude* sd, int myweight);
void ShowInfoAllStruct(SuperDude sd[]); //Passes an array so you don't need &

#endif /* ----- #ifndef DUDE__INC__ ----- */

