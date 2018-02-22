/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Group task
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:38:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int METER_KM = 1000;
const int MIN_HOUR = 60;
const int SEC_MIN = 60;


// Function Prototypes
double Vel(double dist, double InputTime);
double KmToM(double km);
double HrToMin(double hr);

// Main Function
int main()
{
    //User input distance and time
    //Make function to return velocity
    double userDist;
    double userTime;
    double n;
    double m;
    double s;
    double v;
    double b;
    printf("Input kilometers traveled\n");
    scanf("%lf", &userDist);
    printf("Input hours traveled\n");
    scanf("%lf", &userTime);
    n = Vel(userDist, userTime);
    printf("%lf Km/Hr\n", n);
    m = KmToM(userDist);
    s = HrToMin(userTime);
    v = Vel(m, s);
    printf("%lf meters/minute\n", v);
    b = HrToMin(s);
    v = Vel(m, b);
    printf("%lf meters/sec\n", v);


    return 0;
}
// Function Definitions
double Vel(double dist, double InputTime)
{
    double velocity = dist / InputTime;
    return velocity;
}
double KmToM(double km)
{
    double meter = km * METER_KM;
    return meter;
}
double HrToMin(double hr)
{
    double minutes = hr * MIN_HOUR;
    return minutes;
}
