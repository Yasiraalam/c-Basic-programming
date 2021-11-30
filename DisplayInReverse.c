// Program for displaying the given array in reverse.
#include<stdio.h>

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
    
    printf("The given array is: ");
    // Printing the array.
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");

    printf("The Reverse of the given array is:\n");
    // Printing the array.
    for (index = sizeOfArray - 1; index >= 0; index--)
        printf("%d ", userArray[index]);
    printf("\n");
} // main