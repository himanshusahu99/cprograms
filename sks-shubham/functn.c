#include<stdio.h>

int eo(int);

int main()
{
	int a;
	printf("Enter the no.:");
	scanf("%d",&a);
	if(eo(a))
		printf("even");
	else
		printf("odd");
	return 0;
}

int eo(int a)
{	
	if(a%2==0)
		return 1;
	else 
		return 0;
}
