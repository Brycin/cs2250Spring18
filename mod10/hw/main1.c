/*
 * =====================================================================================
 *
 *       Filename:  main1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 02:31:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contacts.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    ContactNode* headObj = NULL; //Contact1 will be the headObj
    ContactNode* currObj = NULL;
    ContactNode* contact2 = NULL;
    ContactNode* contact3 = NULL;
    char name[50];
    char num[50];

    //Get input for contact 1 (headObj)
    printf("Person 1\n");
    printf("Enter name:\n");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter phone number:\n");
    fgets(num, 50, stdin);
    num[strlen(num) - 1] = '\0';
    printf("You entered: %s, %s\n\n", name, num);

    //Create node for contact 1 (headObj)
    headObj = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(headObj, name, num, NULL);

    //Get input for contact 2
    printf("Person 2\n");
    printf("Enter name:\n");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter phone number:\n");
    fgets(num, 50, stdin);
    num[strlen(num) - 1] = '\0';
    printf("You entered: %s, %s\n\n", name, num);

    //Create node for contact 2
    contact2 = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(contact2, name, num, NULL);
    InsertContactAfter(headObj, contact2);

    //Get input for contact 3
    printf("Person 3\n");
    printf("Enter name:\n");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter phone number:\n");
    fgets(num, 50, stdin);
    printf("You entered: %s, %s\n\n", name, num);

    //Create node for contact 2
    contact3 = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(contact3, name, num, NULL);
    InsertContactAfter(contact2, contact3);

    //Print linked list
    printf("CONTACT LIST\n");
    currObj = headObj;
    while (currObj != NULL)
    {
        PrintContactNode(currObj);
        currObj = GetNextContact(currObj);
    }

    free(headObj);
    free(contact2);
    free(contact3);
    return 0;
}
// Function Definitions


