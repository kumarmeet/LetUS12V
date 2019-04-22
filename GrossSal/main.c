/* Find gross salary*/
/*22-04-2019*/

#include <stdio.h> //#include is a preprocessor directive
#include <stdlib.h>

int main()
{
    float basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;


    printf("Enter a Ramesh basic salary: Rs.");
    scanf("%f", &basicSalary);

    //calculate 40% dearnessAllowance
    dearnessAllowance = (40 * basicSalary) / 100;

    //calculate 20% houseRentAllowance
    houseRentAllowance = (20 * basicSalary) / 100;

    //gross salary
    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

    printf("Ramesh dearness allowance Rs.%f and house rent Rs.%f, gross salary of Ramesh is Rs.%f"
           ,dearnessAllowance, houseRentAllowance,grossSalary);

    return 0;
}
