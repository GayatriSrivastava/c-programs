/*A company insures its drivers in the following cases: 
If the driver is married. 
If the driver is unmarried, male & above 30 years of age.the driver is unmarried, female & above 25 years of age. 
In all other cases, the driver is not insured. If the marital status, sex and 
age of the driver are the inputs, write a program to determine whether 
the driver should be insured or not. 
The final outcome of the program would be—either the driver should be 
insured or the driver should not be insured.*/
#include <stdio.h>

int main()
{
    int age;
    char ms, sex;

    printf("Enter the age, marital status, sex of driver: ");
    scanf("%d %c %c", &age, &ms, &sex);

    if (ms == 'm')
        printf("The driver is insured");

    else if (age > 30 && ms == 'u' && sex == 'M')
        printf("The driver is insured");

    else if (age > 25 && ms == 'u' && sex == 'F')
        printf("The driver is insured");

    else
        printf("The driver is not insured");

    return 0;
}