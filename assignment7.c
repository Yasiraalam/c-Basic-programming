/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/
#include<stdio.h>
int main()
{
    int length,breadth,Area,parimeter;
    printf("Enter the Length of rectangle");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle");
    scanf("%d",&breadth);
    Area=length*breadth;
    parimeter=2*length+2*breadth;
    if(Area>=parimeter)
    {
        printf("Area is Greater than parimeter");
    }
    else
    {
        printf("parimeter is Greater than Area");
    }
    return 0;
}