#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0,i;
    float x[2],y[2],a=1,b=1,c=1,X,Y;
    x[0]=0;
    x[1]=-1;
    x[2]=0;
    x[3]=1;
    y[0]=1;
    y[1]=0;
    y[2]=-1;
    y[3]=0;
     /*printf("Enter the first point of class 1\n");
     scanf("%f%f",&x[0],y[0]);
     printf("Enter the second point of class 1\n");
     scanf("%f%f",&x[1],y[1]);
     printf("Enter the first point of class 2\n");
     scanf("%f%f",&x[2],y[2]);
     printf("Enter the second point of class 2\n");
     scanf("%f%f",&x[3],y[3]);*/
     while(j<5)
    {
       for(i=0;i<4;i++)
       {
           if((a*x[i]+b*y[i]+c<=0)&&((x[i]==1)||(y[i]==-1)))
        /*if((a*x[i]+b*y[i]+c<=0)&&(((x[i]==x[2])&&(y[i]==y[2]))||((x[i]==x[3])&&(y[i]==y[3]))))*/
        {
            a=a+x[i];
            b=b+y[i];
            c=c+1;
            printf("New: a=%f,b=%f,c=%f\n",a,b,c);
        }
        else if ((a*x[i]+b*y[i]+c>=0)&&((x[i]==-1)||(y[i]==1)))
       /* else if((a*x[i]+b*y[i]+c>=0)&&(((x[i]==x[0])&&(y[i]==y[0]))||((x[i]==x[1])&&(y[i]==y[1]))))*/
        {
            a=a-x[i];
            b=b-y[i];
            c=c-1;
            printf("New a=%f,b=%f,c=%f\n",a,b,c);
       }

       }
       j++;
    }
    printf("The required weights are %f,%f and %f\n",a,b,c);
    printf("Enter the value of the two parameters\n");
    scanf("%f%f",&X,&Y);
    if(a*X+b*Y+c<0)
        printf("It is of class 1");
    else
        printf("It is of class 2");
    return 0;

}
