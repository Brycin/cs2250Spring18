#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Playlist.h"


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  CreatePlaylistNode
 *  Description:  
 * =====================================================================================
 */
void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc)
{
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    PlaylistNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  SetNextPlaylistNode
 *  Description:  
 * =====================================================================================
 */
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextPlaylistNode
 *  Description:  
 * =====================================================================================
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    return thisNode->nextNodePtr;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintPlaylistNode
 *  Description:  
 * =====================================================================================
 */
void PrintPlaylistNode(PlaylistNode* thisNode)
{
    printf("Unique ID: %s\n", thisNode->uniqueID);
    printf("Song Name: %s\n", thisNode->songName);
    printf("Artist Name: %s\n", thisNode->artistName);
    printf("Song Length (in seconds): %d\n", thisNode->songLength);
    return;
}
