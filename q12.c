/*Any year is input through the keyboard. Write a program to determine 
whether the year is a leap year or not.*/
#include <stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
        printf("year is a leap year\n");
        else
        printf("not a leap year\n");
    }
    else
    {
        if(yr%4==0)
        printf("leap year\n");
        else
        printf("not a leap year\n");
    }
    return 0;
}