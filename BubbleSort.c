// Sorting an given array either in ascending or descending order.
/* Algorithm.

    Working rule: The adjacent elements are compared and swapped.
    (if required) at end of the one loop largest or smallest is 
    bubbled to the end. Hence for each element sortedArray pass is required
    but for the last element n - 1 are already sorted hence no pass
    required for the last element.
    15 16 6 8 5  -> 5 elements
    Pass 1:         Pass 2:      Pass 3:      Pass 4:
    15 16 6 8 5   6 15 8 5 16   6 8 5 15 16  5 6 8 15 16
    15 6 16 8 5   6 8 15 5 16   6 5 8 15 16    not req
    15 6 8 16 5   6 8 5 15 16    not req
    15 6 8 5 16     not req.
    Logic into code.
    Optional:
    If we get sorted array after in between passes.
    3 2 4 5 6   2 3 4 5 6
                2 3 4 5 6 
                2 3 4 5 6 no other pass required hence if no swap
                2 3 4 5 6 in pass break out from passes loop.
*/
#include<stdio.h>

// Swapping the integers using pointers.
void swap(int *pointerOfX, int *pointerOfY)
{
    int temp = *pointerOfX; *pointerOfX = *pointerOfY;
    *pointerOfY = temp;
} // swap

// Bubble sort...
void sort(int sortedArray[], int size)
{
    int passNo, cmpIndex, swapCheck = 1, count = 0;

    // instead of using for loop for passes we could use while which
    // would not terminated untill a pass comes in which no swapping 
    // is done ie:  only while(swapCheck) would be used.
    for (passNo = 1; passNo < size; passNo++)
    {
        if (swapCheck)
        {
            count++;
            for (cmpIndex = 0; cmpIndex < size - passNo; cmpIndex++)
            {
                if (sortedArray[cmpIndex + 1] < sortedArray[cmpIndex])
                {
                    swap(&sortedArray[cmpIndex], &sortedArray[cmpIndex + 1]);
                    swapCheck = 1;
                } // if
                else
                    swapCheck = 0;
            } // for
        } // if
        else 
            break;
    } // for
    printf("In %d Pass\n", count);
} // sort

int main()
{
    int sizeOfArray, index;

    printf("Enter size of the array: ");
    scanf("%d", &sizeOfArray);
    // Creating array usign the given size.
    int userArray[sizeOfArray];
    
    // Taking each element from the user.
    for (index = 0; index < sizeOfArray; index++)
    {
        printf("Enter element no. %d: ", index + 1);
        scanf("%d", &userArray[index]); 
    } // for

    // Printing the array.
    printf("The given array is: ");
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");

    // sorting array.
    sort(userArray, sizeOfArray);

    // Printing the sorted array.
    printf("The sorted array is:\n");
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");
} // main

                  