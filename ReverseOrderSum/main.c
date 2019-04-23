/*Find sum of any five digit reverse ordered number */
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, r1,r2,r3,r4,r5, quotient, sum;

    printf("Enter only five digit: ");
    scanf("%d", &number);

    r1 = number % 10;
    quotient = number / 10;

    r2=quotient % 10;
    quotient = quotient / 10;

    r3=quotient % 10;
    quotient = quotient / 10;

    r4=quotient % 10;
    quotient = quotient / 10;

    r5=quotient % 10;
    quotient = quotient / 10;

    sum = r1 + r2 + r3 + r4 + r5;

    printf("Sum of %d reverse five digit number is %d",number,sum);
    return 0;
}
