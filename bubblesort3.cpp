#include<stdio.h>
int main()
 {
 	int a[10],n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter the Elements  : ");
		scanf("%d",&a[i]);
	}
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
					
				}
			}
		}
	
		printf("\nArray after implementing Bubble sort:\n");
		
		for(int i=0;i<n;i++)
		{
			printf("  %d  ",a[i]);
		}
	
 }