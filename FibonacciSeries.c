/* Algorithm:
    1 1 2 3 5 8 13 21 34 .....
    here taking record of two previous elements in var x, y and adding them 
    to get third element, updating variables with new two previous elements.
    x = 0 , y = 1, z = x + y,Now
    x = y , y = z, z = x + y.
*/
// This program is the modified version for only having two variables
// inside main function.
#include<stdio.h>

// function whose use is defined in algo.
void updateVar(int *p, int *q)
{
    int temp;
    temp = *p; *p = *q; *q = temp + *p;
} // updateVar

int main()
{
    int x = 0, y = 1;
    printf("%d  ", y);
    while (x + y <= 21)
    {
        printf("%d  ", x + y);
        updateVar(&x, &y);
    } // while
} // main
