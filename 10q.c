/*While purchasing certain items, a discount of 10% is 
offered if the quantity purchased is more than 1000. If quantity and 
price per item are input through the keyboard, write a program to 
calculate the total expenses. */
#include <stdio.h>
int main()
{
    int quantity;
    float price, discount, te;
    printf("enter the price and quantity of the item:");
    scanf("%f%d",&price,&quantity);
    if(quantity >1000)
    discount=10;
    else
    discount=0;
    te=quantity*price-(quantity*price*discount/100);
    printf("total expenses is %f",te);
    return 0;
}