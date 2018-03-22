/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:36:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef  SEAT__INC__
#define  SEAT_INC__
// Constants
typedef struct Seat_struct {
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

static const int NUM_SEATS = 5;

//Function Prototypes
void SeatMakeEmpty(Seat* seat);
bool SeatIsEmpty(Seat seat);
void SeatPrint(Seat seat);
void SeatsMakeEmpty(Seat seats[], int numSeats);
void SeatsPrint(Seat seats[], int numSeats);



#endif /* ----- #ifndef SEAT__INC__ ----- */

