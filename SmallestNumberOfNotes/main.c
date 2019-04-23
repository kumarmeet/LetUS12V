/*Compute the smallest amountber of notes that will combine to give Rs. N*/
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int n100, n50, n10, n5, n2, n1, amount;

	printf("Enter the amount : ");
	scanf("%d", &amount);

	//amount of notes of 100
	n100 = amount / 100;
	amount = amount % 100;

	//amount of notes of 50
	n50 = amount / 50;
	amount = amount % 50;

	//amount of notes of 10
	n10 = amount / 10;
	amount = amount % 10;

	//amount of notes of 5
	n5 = amount / 5;
	amount = amount % 5;

	//amount of notes of 2
	n2 = amount / 2;
	amount = amount % 2;

	//amount of notes of 1
	n1 = amount / 1;

	printf("\n\nTo give amount of %d you have to give : \n");
	printf("%d of notes of hundred.\n", n100);
	printf("%d of notes of fifty.\n", n50);
	printf("%d of notes of ten.\n", n10);
	printf("%d of notes of five.\n", n5);
	printf("%d of notes of two.\n", n2);
	printf("%d of notes of one.\n", n1);

    return 0;
}
