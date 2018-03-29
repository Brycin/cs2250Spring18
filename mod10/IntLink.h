/*
 * =====================================================================================
 *
 *       Filename:  IntLink.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:59:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INTLINK__INC__
#define  INTLINK_INC__

typedef struct IntNode_struct
{
    int dataVal;
    struct IntNode_struct* nextNodePtr; //Have to use struct cause we havent finished defining it yet
} IntNode; //Done defining at this point

//Function Prototypes
void IntNode_Create (IntNode* thisNode, int dataInit, IntNode* nextLoc);
void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode);
void IntNode_PrintNodeData(IntNode* thisNode);
IntNode* IntNode_GetNext(IntNode* thisNode);


#endif /* ----- #ifndef INTLINK__INC__ ----- */

