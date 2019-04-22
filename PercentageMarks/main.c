/* Find percentage and marks obtained */
/*22-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths, english, hindi, science, socialStudies, marksObtained;
    float percentage;

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter English Marks: ");
    scanf("%d", &english);

    printf("Enter Hindi Marks: ");
    scanf("%d", &hindi);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    printf("Enter Social Studies Marks: ");
    scanf("%d", &socialStudies);

    //total obtained marks
    marksObtained = maths + english + hindi + science + socialStudies;

    //total percentage
    percentage = (marksObtained / 500.0) * 100;

    printf("Total marks obtained %d out of 500 and total percentage is %.2f%c", marksObtained, percentage,37);

    return 0;
}
