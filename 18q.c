/*If the lengths of three sides of a triangle are entered through the 
keyboard, write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater than the largest of 
the three sides.*/
#include <stdio.h>
int main()
{
    int s1,s2,s3,largerside,sum;
    printf("enter the three sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2)
    {
       if(s1>s3)
           {
                sum=s2+s3; largerside=s1;
            }
        else
            {
                sum=s1+s2; largerside=s3;
            } 
     }
    else
    {
        if(s2>s3)
            {
                sum=s1+s3; largerside=s2;
            }
        else
            {
                sum=s1+s2; largerside=s3;
            }
    }
    if(sum>largerside)
        printf("triangle is valid");
    else
        printf("triangle is invalid");
    return 0;
}