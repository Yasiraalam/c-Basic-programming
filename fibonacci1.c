//use recursion to print nth number of the fibonacci series:
//   0 1  1 2 35 8 13 21 34.....

#include<stdio.h>
#include<math.h>
 int main()
 {
     int n;
     print("enter value of n");
     scanf("%d", &n);

     printf("%d", fib(n-1));

 }
 int fib(int n)
 {
     if (n==0)
     return ;
     else if(n==1)
     return 1;
     else 
         return   fib(n-1)+ fib(n-2);
 }