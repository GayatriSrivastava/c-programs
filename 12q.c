/*If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or 
incurred loss. Also determine how much profit he made or loss he 
incurred.*/
#include <stdio.h>
int main()
{
    float sp,cp,p,l;
    printf("enter the cost price and selling price");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
    printf("there is profit of %f",p);
    if(l>0)
    printf("there is loff of %f",l);
    if(p==0)
    printf("there is no profit no loss");
    return 0;
}