/*
 * =====================================================================================
 *
 *       Filename:  firstLinkList.c
 *
 *    Description:  Build link list
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:25:49 AM
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
#include "IntLink.h"

//To autoindent the entire file, sit in the first line, then type: =G


int main(void)
{
    //Bookkeeping
    IntNode* headObj  = NULL; // Create intNode objects //This is first object
    IntNode* currObj  = NULL; //Current object
    //Actual Nodes
    IntNode* nodeObj1 = NULL;
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode)); //Creates space for first object headObj (is not initialized though)
    IntNode_Create(headObj, -1, NULL); 

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj1, 555, NULL);
    IntNode_InsertAfter(headObj, nodeObj1); //Links headObj with Obj1. headObj points to Obj1 and Obj1 still points to NULL

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2); //Obj1 points to Obj2. Obj2 still points to NULL

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3); //Obj1 points to Obj3 now. Obj don't have to go in order. Obj3 now points to what Obj1 pointed to
    //Final order deadObj, nodeObj1, nodeObj3, nodeObj2

    // Print linked list
    currObj = headObj;
    while (currObj != NULL) // Gets the last object in the list
    {
        IntNode_PrintNodeData(currObj);
        currObj = IntNode_GetNext(currObj); // Update currObj to prevent infinite loop
    }
    //Now clean your mess. Free all malloc
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);
    free(nodeObj3);

    return 0;
}
// Function Definitions


