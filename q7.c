/*Consider a currency system in which there are notes of six 
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a 
sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. N. */
#include <stdio.h>
int main()
{
    int amount,nohun,nofifty,noten,notwo,noone,totalnotes;
    printf("enter the amount:");
    scanf("%d",&amount);
        nohun=amount/100;
        amount=amount%100;   
}