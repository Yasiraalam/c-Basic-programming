/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
int main()
{
    int num, n, r=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num!=0)
    {
        r = r * 10;

        r = num % 10;

        num = num/10;
    }
    printf("Reversed Number of %d is %d\n",n, r);

    if (n==r)
        printf("Input Number %d & Reversed Number %d are equal", n, r);
    else
        printf("Input Number %d & Reversed Number %d are not equal", n, r);

   return 0;


}