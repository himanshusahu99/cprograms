/*program to count the numbers*/
#include<stdio.h>
int main()
{
int n,i,count=0,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1>0)
{
n1=n1/10;
count++;
}
printf("%d is having %digits",n,count);
return 0;
}
