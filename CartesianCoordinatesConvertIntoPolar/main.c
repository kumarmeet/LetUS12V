/*Convert Cartesian co-ordinates (x, y) into polar coordinates (r, theta)*/
/*23-04-2019*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y;
    float r, theta;

    printf("Enter the Cartesian Co-ordinates value of x: ");
    scanf("%d", &x);

    printf("Enter the Cartesian Co-ordinates value of y: ");
    scanf("%d", &y);

    // r = √ ( x2 + y2 )
    r =  sqrt(x * x + y * y);

    // θ = tan-1 ( y / x )
    theta = atan((float) y / x);

    printf("The value of polar co-ordinates r = %.2f and  theta = %.2f",r,theta);

    return 0;
}
