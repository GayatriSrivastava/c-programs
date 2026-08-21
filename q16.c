/*A year is entered through the keyboard, write a program to determine 
whether the year is leap or not. Use the logical operators && and ||.*/
#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    if((yr%100==0&&yr%400==0)||(yr%100!=0&&yr%4==0))
        printf("it is a leap year");
    else
        printf("it is not a leap year");
    return 0;
}
