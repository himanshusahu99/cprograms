#include<stdio.h>
int main()
{
 int i,j,n,k;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=(n-i);j++)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",i);
  printf("\n");
 }

 return 0;
}