#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    printf("enter the number");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("the number is not prime\n");
            break;
        }
        i++; 
       
    }
    if (i==num);
        {
        printf("the number is prime\n" );
    }
   
}