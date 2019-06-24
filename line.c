#include<stdio.h>
int main()
{
	 int *a=10;
	int *p;
	int i=2;
	p=&i;
	printf("%d",p/a);
	return 0;
}
