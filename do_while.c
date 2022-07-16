#include<stdio.h>
void main()
{
    int num;
    char another;
    do
    {  
        printf("enter the number\n");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
        printf("want to enter another number y/n:\n");
        fflush(stdin);
        scanf("%c",&another);

    }while(another=='y');
    
}