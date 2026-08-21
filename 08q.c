/*If a five-digit number is input through the keyboard, write a program to 
reverse the number.*/
#include <stdio.h>
int main()
{
    int n,d5,d4,d3,d2,d1;
    long int rev;
    printf("\nenter the five digit number you wsnt to reverse: ");
    scanf("%d",&n);
    d5=n%10; /* Extract the 5th digit */
    n=n/10;
    d4=n%10;/*extract the 4th digit*/
    n=n/10;
    d3=n%10;/*extract the 3rd digit*/
    n=n/10;
    d2=n%10;/*extract the 2nd digit*/
    n=n/10;
    d1=n%10;/*extract the 1st digit*/
    rev=d5*10000+d4*1000+d3*100+d2*10+d1;/*reversing the number*/
    printf("\nThe reversed number is: %ld",rev); /*specifier %ld is used for printing a long integer*/
    return 0;
}   