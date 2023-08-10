#include<stdio.h>
int main()
{

		int a[10],n;
		printf("enter the number for size ");
		scanf("%d",&n);

				for(int i=0;i<n;i++)
{
			printf("enter the elements for sorting ");
			scanf("%d",&a[i]);

}

				for(int i=0;i<=n-1;i++)
{				
	for(int j=0;j<n-1;j++)
{
		if(a[j]>a[j+1])
	
	{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
		
	}
}
}


}
		printf ("\nafter printing array");


			for(int i=0;i<n;i++)


{		printf("%d",a[i]);
}





}


