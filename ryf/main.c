#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int p,t,i;
    float r,si;
    for(i=0;i<3;i++)
    {
        printf("Enter the pricipal,time and rate");
        scanf("%d%d%f",&p,&t,&r);
        si=p*r*t/100;
        printf("The simple interest is %f",si);
    }



    return 0;
}
