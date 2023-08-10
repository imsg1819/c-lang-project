#include<stdio.h>
int mul(int a,int b);
int main()
{
	int x;
	x=mul(5,7);
	printf("the value of x=%d",x);
	
}
	int mul(int a,int b)
{
	int c;
	c=a*b;
	return(c);
}
