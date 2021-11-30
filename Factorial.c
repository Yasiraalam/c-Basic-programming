// Program to find factorial of a number
#include<stdio.h>

int main()
{
    int factNum, n, fact = 1;
    printf("Enter an integer to find its factorial: ");
    scanf("%d", &factNum);
    n = factNum;
    while (n > 1)
    {
        fact *= n;
        n--;
    } // while

    printf("Factorial of %d! = %d", factNum, fact);
} // main