/*Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.*/

#include<stdio.h>
int main()
{
  int ang1,ang2,ang3;
  printf("Enter the Angle 1,Angle 2,Angle 3\n");
  scanf("%d %d %d",&ang1,&ang2,&ang3);
  if(ang1+ang2+ang3==180)
  {
      printf("It is a Triangle");

  }
  else
  {
      printf("It is not a Triangle");
  }
  return 0;

}