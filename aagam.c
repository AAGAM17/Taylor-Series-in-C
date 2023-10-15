#include <stdio.h>
int fac(int x)
{
    int i,fac=1;
    for(i=1;i<=x;i++)
        fac=fac*i;
    return fac;
}

int main()
{
    float x,Q,sum=0;
    int i,j,limit;

    printf("Enter the value of x of sinx series: ");
    scanf("%f",&x);

    printf("Enter the limit upto which you want to expand the series: ");
    scanf("%d",&limit);

    Q=x;
    x = x*(3.1415/180);

    float term = x;
    for(i=1,j=1;i<=limit;i++,j=j+2)
    {
        if(i%2!=0)
        {
            sum=sum+term/fac(j);
        }
        else
            sum=sum-term/fac(j);
            term = term * x * x / ((j+1)*(j+2));
    }

    printf("Sin(%f): %f",Q,sum);
    return 0;
}