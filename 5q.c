/*The distance between two cities (in kilometers) is input through the 
keyboard. Write a program to convert and print this distance in meters, 
feet, inches and centimeters.*/
#include <stdio.h>
int main()
{
    float km,m,ft,in,cm;
    printf("enter the distance between two cities in km ");
    scanf("%f",&km);
m=km*1000;
ft=km*3280.84;
in=km*39370.1;
cm=km*100000;
printf("distance in meters is %f\n",m);
printf("distance in feet is %f\n",ft);
printf("distance in inches is %f\n",in);
printf("distance in centimeters is %f\n",cm);
return 0;
}
