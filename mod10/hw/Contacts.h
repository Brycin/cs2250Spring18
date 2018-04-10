t*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2018 02:35:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__

typedef struct ContactNode_struct
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode_struct* nextNodePtr;
} ContactNode;

//Function Prototypes
void CreateContactNode (ContactNode* thisNode, char name[], char num[], ContactNode* nextLoc);
void InsertContactAfter (ContactNode* thisNode, ContactNode* newNode);
void PrintContactNode (ContactNode* thisNode);
ContactNode* GetNextContact(ContactNode* thisNode);
#endif /* ----- #ifndef CONTACTS__INC__ ----- */

