/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/
#include<stdio.h>
void main()
{
    int cost_price,selling_price;
    printf("Enter the cost_price of product\n");
    scanf("%d",&cost_price);
    printf("Enter the selling price of product");
    scanf("%d",&selling_price);
    if(cost_price> selling_price)
    {
        printf("the seller has incurred loss\n");
    }
    else{
        printf("the seller has made profit\n");
    }

}
