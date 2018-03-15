/*
 * =====================================================================================
 *
 *       Filename:  brycin_silvester_exam1_task2.c
 *
 *    Description:  Second Choice (Task 2)
 *                  Calculate and print average within function
 *                  Return number of failures back to main
 *
 *        Version:  1.0
 *        Created:  02/27/2018 08:42:33 AM
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

// Function Prototypes
int GradeAve(int grades);

// Main Function
int main()
{
    int numFailures;
    int grades;
    printf("How many grades will you be entering?\n");
    scanf("%d", &grades);
    numFailures = (GradeAve(grades));
    printf("Number of failures = %d\n", numFailures);

    return 0;
}
// Function Definitions
int GradeAve(int grades)
{
    int failures = 0;
    double score;
    double totalScore  = 0.0;

    for(int i = 1; i <= grades; ++i)
    {
        printf("Enter grade #%d:\n", i);
        scanf("%lf", &score);
        if(score < 65)
        {
            ++ failures;
        }
        totalScore = totalScore + score;
    }
    printf("\nGrade average = %.2f\n\n", (totalScore/grades));

    return failures;
}

