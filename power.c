#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,x,c;
    printf("enter the two  numbers\n");
    scanf("%d %d",&a,&b);
    // if your use math.h lib;
   //c=powl(a,b);

   c=1;               // without math.h lib:
   //x=b;
   while(b!=0)
   {
       c=c*a;
       b=b-1;

   }
    //printf(" %d is the power of %d to the %d",c,a,b);
    printf("%d is the power of a to power of b",c);
   
}