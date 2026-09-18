/* Program (2) -> Write a program to make use of basic Input/Output function using
different data types. */

#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\nEnter Student Roll Number:");
    scanf("%d", &rollnum);

    printf("\nEnter Student Percentage :");
    scanf("%f", &per);

    printf("\nEnter Student Grade:");
    scanf("%c", &grade);

    printf("\n---Student Information---");
    printf("\nRoll Number is: %d", rollnum);
    printf("\nPercentage is: %f", per);
    printf("\nGrade is: %c", grade);

    return 0;
}