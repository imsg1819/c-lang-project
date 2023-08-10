#include<stdio.h>
int factorial(int a);
int main()
{
	int x,n;
	printf("enter the value of x:");
	scanf ("%d", &x);
	n=factorial(x);
	printf("factorial of %d=%d",x,n);
}
int factorial(int a)
{
	
	if 	if(a==1)
	return(a);
	else
	{
	 return(a*factorial(a-1));
	}
}
