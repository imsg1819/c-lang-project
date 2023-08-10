#include<stdio.h>
int function(int a);
int main()
{

int x,n;
printf("enter the value of x: \n");
scanf("%d",x);
n=function(x);
printf("factorial  of %d=%d\n");
	
}
int factorial(int a)

{

int m;
if(a==1)
return(a);
else
{
	m=a*factorial(a-1);
}

return(m);
}





