#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greter=%d",a);
		
			
		}
	}
	else if(b>a&&b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater=%d",c);
	}
	return 0;
}
