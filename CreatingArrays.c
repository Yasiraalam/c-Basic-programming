// Taking integer elements from the user and store them in array
// of size taken from the user.
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

    // Printing the array.
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");
} // main