#include<stdio.h>
int main()
{
	int a[100],i,n,count=0;
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		if(a[i]>=0)
		{
			printf("no is positive");
			count=count+a[i];
			
		}
		else if(a[i]==-1)
		{
			exit(0);
		}
	
		else
		{
			printf("no is negative");
			count=count+a[i];
		}
		printf("%d",count);
return 0;	
}
