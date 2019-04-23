/*Find each cost item price*/
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float profit, sellingPrice, costPrice, costItemPrice;

    printf("Enter the profit : ");
	scanf("%.2f", &profit);

	printf("Enter the 15 item selling price : ");
	scanf("%.2f", &sellingPrice);

    //formula of find the total cost price
    costPrice = (float) sellingPrice - profit;

    //formula of find the each item cost price
    costItem = costPrice / 15;

    printf("Each cost of item is %.2f", costItemPrice);

    return 0;
}
