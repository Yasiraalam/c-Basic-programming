#include<stdio.h>
#include<math.h>
void fun(int *eng,int *math,int *sci);

int main(){
int eng,math,sci,marks;
float avg,per;
printf("Enter the marks in english:");
scanf("%d",eng);
printf("Enter the marks in math:\n");
scanf("%d",math);
printf("Enter the marks in science:\n");
scanf("%d",sci);
fun(&eng,&math,&sci);

}
void fun(int *i,int *j, int *k)
{  int marks;
   float avg,per;
   marks= *i+*k+*k;
   printf("total marks obtained :%d\n",marks);
   avg= marks/3;
   printf("the average is:%f\n",avg);
   per= (marks/300)*100;
   printf("the percentage is :%f\n",per);
}