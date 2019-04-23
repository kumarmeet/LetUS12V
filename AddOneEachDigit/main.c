/*Add one each digit if user input five digit number*/
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, d1,  d2, d3, d4, d5, d6, temp;

    printf("Enter only five digit number: ");
    scanf("%d", & num);

    temp = num;

    d1 = num + 1;
    d2 = d1 + 10;
    d3 = d2 + 100;
    d4 = d3 + 1000;
    d5 = d4 + 10000;

    printf("Add one on  %d each number %d\n", temp, d5);

    return 0;
}


