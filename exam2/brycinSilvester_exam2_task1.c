/*
 * =====================================================================================
 *
 *       Filename:  brycinSilvester_exam2_task1.c
 *
 *    Description:  Task 1
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:26:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>  //For C
//#include <iostream>   //For C++
//using namespace std;  //For C++

// Constants

typedef struct Mytime_t
{
    int hour;
    int minutes;
    int seconds;
}MyTime;

// Function Prototypes
MyTime elapsed_time(const MyTime t1, const MyTime t2);

// Main Function
int main()
{
    MyTime elapsed;
    MyTime t1 = {3, 45, 15};
    MyTime t2 = {9, 44, 3};
    MyTime t3 = {22, 50, 59};
    MyTime t4 = {7, 30, 0};

    elapsed = elapsed_time(t1, t2);
    printf("%02d:%02d:%02d\n", elapsed.hour, elapsed.minutes, elapsed.seconds);
    elapsed = elapsed_time(t2, t1);
    printf("%02d:%02d:%02d\n", elapsed.hour, elapsed.minutes, elapsed.seconds);
    elapsed = elapsed_time(t3, t4);
    printf("%02d:%02d:%02d\n", elapsed.hour, elapsed.minutes, elapsed.seconds);


    return 0;
}
// Function Definitions

MyTime elapsed_time(const MyTime t1, const MyTime t2)
{
    MyTime calcTime;
    calcTime.hour = t2.hour - t1.hour;
    calcTime.minutes = t2.minutes - t1.minutes;
    calcTime.seconds = t2.seconds - t1.seconds;
    if(calcTime.seconds < 0)
    {
        calcTime.seconds = calcTime.seconds + 60;
        calcTime.minutes = calcTime.minutes - 1;
    }
    if(calcTime.minutes < 0)
    {
        calcTime.minutes = calcTime.minutes + 60;
        calcTime.hour = calcTime.hour -1;
    }
    if(calcTime.hour < 0)
    {
        calcTime.hour = calcTime.hour + 24;
    }
    return calcTime;
}



