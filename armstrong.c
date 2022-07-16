#include<stdio.h>
#include<math.h>
void main()
{
    int a, sum ,i,c,b;
    printf("Enter the number \n");
    scanf("%d",&a);
    for(i=1; i <= 500; i++)
    {
           
            b=(a%10==b);
            c=(a%100==c);
        
            sum=powl(b,3)+powl(c,3);
            printf("the numebr is armstrong ",sum);
            }
      
}