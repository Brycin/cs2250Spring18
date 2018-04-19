/*
 * =====================================================================================
 *
 *       Filename:  brycinSilvester_exam2_task2.cpp
 *
 *    Description:  Task 5 Problem 2
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:27:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  //For C
#include <iostream>   //For C++
using namespace std;  //For C++

// Constants
class MyTime
{
    private:

        int hour;
        int minutes;
        int seconds;
        MyTime ElapsedTime(MyTime first, MyTime second);

    public:

        MyTime();
        void SetHourMinuteSecond(int hours, int minute, int second);

        int GetHour() const;
        int GetMinute() const;
        int GetSecond() const;
        MyTime GetElapsed(MyTime first, MyTime second) const;
};


// Function Prototypes
//MyTime::MyTime();
//void MyTime::SetHourMinuteSecond(int hours, int minute, int second);
//int MyTime::GetHour() const;
//int MyTime::GetMinute() const;
//int MyTime::GetSecond() const;

// Main Function
int main()
{
    MyTime t1;
    MyTime t2;
    MyTime t3;
    MyTime t4;
    MyTime elapsed;

    t1.SetHourMinuteSecond(3, 45, 15);
    //cout << t1.GetHour()<<":"<<t1.GetMinute()<<":"<<t1.GetSecond() << endl;
    t2.SetHourMinuteSecond(9, 44, 3);
    //cout << t2.GetHour()<<":"<<t2.GetMinute()<<":"<<t2.GetSecond() << endl;
    t3.SetHourMinuteSecond(22, 50, 59);
    //cout << t3.GetHour()<<":"<<t3.GetMinute()<<":"<<t3.GetSecond() << endl;
    t4.SetHourMinuteSecond(7, 30, 0);
    //cout << t4.GetHour()<<":"<<t4.GetMinute()<<":"<<t4.GetSecond() << endl;

    elapsed.GetElapsed(t1, t2);
    cout << elapsed.GetHour()<<":"<<elapsed.GetMinute()<<":"<<elapsed.GetSecond() << endl;
    elapsed.GetElapsed(t2, t1);
    cout << elapsed.GetHour()<<":"<<elapsed.GetMinute()<<":"<<elapsed.GetSecond() << endl;
    elapsed.GetElapsed(t3, t4);
    cout << elapsed.GetHour()<<":"<<elapsed.GetMinute()<<":"<<elapsed.GetSecond() << endl;
    



    return 0;
}
// Function Definitions
MyTime::MyTime()
{
    hour = -1;
    minutes = -1;
    seconds = -1;
    return;
}


void MyTime::SetHourMinuteSecond(int hours, int minute, int second)
{
    hour = hours;
    minutes = minute;
    seconds = second;
    return;
}

int MyTime::GetHour() const
{
    return hour;
}

int MyTime::GetMinute() const
{
    return minutes;
}

int MyTime::GetSecond() const
{
    return seconds;
}
MyTime MyTime::ElapsedTime(const MyTime t1, const MyTime t2)
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

