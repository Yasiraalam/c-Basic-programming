#include<stdio.h>
#include<math.h>
void fun(int *x,int *y,int *z,int *p,int *q );

int main() {
   int x,y,z,p,q;
   int average,add;
   printf("enter the value of all int nums\n");
   scanf("%d %d %d %d %d",&x,&y,&z,&p,&q);
   fun(&x,&y,&z,&p,&q);
   
 }
 void fun(int *x,int *y,int *z,int *p,int *q)
{   int add;
  float average;
    
    add= (*x+*y+*z+*p+*q);
      printf(" the sum is:%d\n",add);
   average=add/5.0;
    printf("the average is: %f\n",average);
}
