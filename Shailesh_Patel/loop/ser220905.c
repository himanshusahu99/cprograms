#include<stdio.h>
int main()
{
    int i,j,k,f,p,terms,x;
    float sum=0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&terms);
     printf("Enter the value of x : ");
    scanf("%d",&x);
    for(i=1;i<=terms;i++)
    {
        f=1;
        p=1;
        for(j=1;j<=i;j++)
            {
                f=f*j;
            }
        for(k=1;k<=i;k++)
           {
                p=p*x;
           }
        sum=sum+(float)p/f;
    }
    printf("The sum of %d terms of series is %f",terms,sum);
    return 0;
}

