#include <stdio.h>
int main()
{
    char g,q;
    int yos,s;
    printf("enter the gender,year of service,qualifications");
    scanf("%c%d %c",&g,&yos,&q);
    if(g=='m')
    {
        if(yos>=10&&q=='p')
             printf("%d\n",s=11000);
        else if(yos>=10&&q=='g')
             printf("%d\n",s=10000);
        else if(yos<10&&q=='p')
             printf("%d\n",s=10000);
        else
             printf("%d\n",s=7000);
    }
    else
    {
         if(yos>=10&&q=='p')
            printf("%d\n",s=12000);
        else if(yos>=10&&q=='g')
             printf("%d\n",s=9000);
        else if(yos<10&&q=='p')
             printf("%d\n",s=10000);
        else
             printf("%d\n",s=6000);
    }
return 0;
}