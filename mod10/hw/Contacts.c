/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 02:36:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "Contacts.h"

// Constants


// Function Definitions

void CreateContactNode (ContactNode* thisNode, char name[], char num[], ContactNode* nextLoc)
{
    strcpy(thisNode->contactName, name);
    strcpy(thisNode->contactPhoneNum, num);
    thisNode->nextNodePtr = nextLoc;
    return;
}


void InsertContactAfter (ContactNode* thisNode, ContactNode* newNode)
{
    ContactNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}


void PrintContactNode (ContactNode* thisNode)
{
    printf("Name: %s\n", thisNode->contactName);
    printf("Phone number: %s\n\n", thisNode->contactPhoneNum);
    return;
}


ContactNode* GetNextContact(ContactNode* thisNode)
{

    return thisNode->nextNodePtr;
}
