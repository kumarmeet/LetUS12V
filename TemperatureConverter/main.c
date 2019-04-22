/* Temperature Converter */
/*22-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    float centigrade;

    printf("Enter today's Bhopal temperature in fahrenheit: ");
    scanf("%d",&fahrenheit);

    //formula of convert fahrenheit into centigrade
    centigrade = (float)(fahrenheit - 32) * 5 / 9;

    printf("Bhopal temperature in centigrade %.2f",centigrade);

    return 0;
}
