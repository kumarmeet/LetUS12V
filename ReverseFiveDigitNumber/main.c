/*Reverse five digit number */
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int number, holdNumberValue, r1,r2,r3,r4,r5, reverse;

    printf("Enter only five digit: ");
    scanf("%d", &number);

    holdNumberValue = number;

    //logic of reverse number  suppose user entered number = 12345

    r1 = number % 10;     //r1 = 5
    number = number / 10; //number = 1234
    reverse = r1 * 10000; //reverse = 50000

    r2 = number % 10;  //r2 = 4
    number = number / 10; //number = 123
    reverse = reverse + r2 * 1000; //reverse -> 50000 + 4000 = 54000

    r3 = number % 10; //r3 = 3
    number = number / 10; //number = 12
    reverse = reverse + r3 * 100; // reverse -> 54000 + 300 =54300

    r4 = number % 10; //r4 = 2
    number = number / 10; //number = 1
    reverse = reverse + r4 * 10; //reverse -> 54300 +20 = 54320

    r5 = number % 10; //r5 = 1
    reverse = reverse + r5 * 1; //reverse -> 54320 + 1 = 54321


    printf("Reverse digit of %d is %d",holdNumberValue,reverse);

    return 0;
}
