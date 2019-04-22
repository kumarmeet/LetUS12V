/* Length unit conversion */
/*22-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cityDistance, totalDistance, meter, foots, inches, centimeters;

    printf("Enter Bhopal to Mumbai distance in km: ");
    scanf("%d",&cityDistance);

    /*
    convert to km into meter, foots, inches and centimeters
    1km = 1000 meters
    1km = 3280.84 foots
    1km = 39370.1 inches
    1km = 100000 centimeters
    */
    meter = cityDistance * 1000;
    foots = cityDistance * 3280.84;
    inches = cityDistance * 39370.1;
    centimeters = cityDistance * 100000;

    printf("%d km = %d meters\n",cityDistance,meter);
    printf("%d km = %d foots\n",cityDistance,foots);
    printf("%d km = %d inches\n",cityDistance,inches);
    printf("%d km = %d centimeters\n",cityDistance,centimeters);

    return 0;
}
