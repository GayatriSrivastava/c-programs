/*The marks obtained by a student in 5 different subjects are 
input through the keyboard. The student gets a division as per the 
following rules: 
Percentage above or equal to 60 - First division 
Percentage between 50 and 59 - Second division 
Percentage between 40 and 49 - Third division 
Percentage less than 40 - Fail */
#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5, percentage;

    printf("Enter the marks of all subjects: ");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

    percentage = (s1 + s2 + s3 + s4 + s5) * 100 / 500;

    printf("The value of percentage is %f\n", percentage);

    if(percentage >= 60)
        printf("First division");
    else if(percentage >= 50)
        printf("Second division");
    else if(percentage >= 40)
        printf("Third division");
    else
        printf("Fail");

    return 0;
}