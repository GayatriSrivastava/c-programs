/*Consider a currency system in which there are notes of six 
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a 
sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. N. */
#include <stdio.h>
int main()
{
    int amount,no100,no50,no10,no5,no2,no1,totalnotes;
    printf("enter the amount:");
    scanf("%d",&amount);
        no100=amount/100;
        amount=amount%100;
        no50=amount/50;
        amount=amount%50;
        no10=amount/10;
        amount=amount%10;
        no5=amount/5;
        amount=amount%5;
        no2=amount/2;
        amount=amount%2;
        no1=amount/1;
        totalnotes=no100+no50+no10+no5+no2+no1;
        printf("total number of smallest notes is %d\n",totalnotes);
        return 0;
}