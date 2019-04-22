/*Find area of rectangle and circumference of circle */
/*22-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, parameter, length, breadth, radius, circumference;

    printf("Enter length of a rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of a rectangle: ");
    scanf("%f", &breadth);

    printf("Enter radius of a circle: ");
    scanf("%f", &radius);

    //area of rectangle
    area = length * breadth;

    //parameter of rectangle
    parameter = (length + breadth) * 2;

    //circumference of a circle
    circumference = 2 * 3.14 * radius;

    printf("Area of a rectangle is %.2f and parameter is %.2f\n", area, parameter);
    printf("Circumference of a circle is %.2f", circumference);

    return 0;
}
