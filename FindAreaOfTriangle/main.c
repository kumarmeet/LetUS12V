/*Find area of the triangle by Heron's Formula*/
/*23-04-2019*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tSide1, tSide2, tSide3, perimeter, areaOfTriangle;

    printf("Enter length of side 1 of triangle: ");
	scanf("%f", &tSide1);

	printf("Enter length of side 2 of triangle: ");
	scanf("%f", &tSide2);

	printf("Enter length of side 3 of triangle: ");
	scanf("%f", &tSide3);

    //find perimeter of triangle
	perimeter = (tSide1 + tSide2 + tSide3) / 2;

    //Heron's Formula
	areaOfTriangle = sqrt(perimeter * (perimeter - tSide1) * (perimeter - tSide2) * (perimeter - tSide3));

	printf("Area of a triangle is %.2f", areaOfTriangle);

    return 0;
}
