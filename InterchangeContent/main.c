/*Interchange variable content or value */
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,d,temp;

    printf("Enter value of c = ");
    scanf("%d",&c);
    printf("Enter value of d = ");
    scanf("%d",&d);
    printf("Value of c = %d and d = %d\n",c,d);

    //interchange the value of c and d variables
    temp = c;
    c = d;
    d = temp;

    printf("After interchanging\n");

    printf("Value of c = %d and d = %d",c,d);

    return 0;
}
