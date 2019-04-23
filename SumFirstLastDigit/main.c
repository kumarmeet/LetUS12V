/*Sum of first and last digit number */
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, n1, first, last, sum;

    printf("Enter only four digit: ");
    scanf("%d", &number);

    n1 = number;

    //logic of obtain first digit suppose number = 5463

    last = number / 1000; //first -> 5463 / 1000 = 5

    first = number % 10; //last -> 5463 % 10 = 3

    sum = first + last;

    printf("Sum of first & last digit of %d is %d",n1, sum);


    return 0;
}
