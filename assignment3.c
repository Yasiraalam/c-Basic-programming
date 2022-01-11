/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/
#include<stdio.h>
void main()
{  
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a year is leap year",year);
    }
    else if(year%100==0)
    {
        printf("%d is a year is leap year",year);
    }
    else if (year% 4==0)
    {
        printf("%d is year is leap year ",year);
    }
    else
    {
        printf("%d is year is  not leap year",year);
    }
}