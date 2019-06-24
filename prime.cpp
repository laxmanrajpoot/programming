#include<iostream>
using namespace std;
int main()
{
	int a;
	bool c=true;
	cout<<"enter a no";
	cin>>a;
	for(int i=1;i<a;i++)
	{
	if(a%i!=0)
	{
		c=0;
		cout<<"no is prime\n";
		break;
	}

	else
	
		cout<<"no is not  prime\n";
		break;
	}
	return 0;
	
}
