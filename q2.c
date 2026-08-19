/*Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary.*/
#include <stdio.h>
int main ()
{
    int bs,da,ra,gs;
    printf("enter basic salary of ramesh");
    scanf("%d",&bs);
    da=0.4*bs;
    ra=0.2*bs;
    gs=bs+da+ra;
    printf("gross salary of ramesh is %d",gs);
    return 0;
}