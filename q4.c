/*If the marks obtained by a student in five different subjects are input 
through the keyboard, write a program to find out the aggregate marks 
and percentage marks obtained by the student. Assume that the 
maximum marks that can be obtained by a student in each subject is 
100.*/
#include <stdio.h>
int main()
{
    float math,phy,chem,eng,cs,aggregate,percentage;
    printf("enter marks obtained in math,phy,chem,eng,cs");
    scanf("%f%f%f%f%f",&math,&phy,&chem,&eng,&cs);
    aggregate=math+phy+chem+eng+cs;
    percentage=(aggregate/500)*100;
    printf("aggregate marks obtained by the student is %f\n",aggregate);
    printf("percentage marks obtained by the student is %f\n",percentage);
    return 0;
}