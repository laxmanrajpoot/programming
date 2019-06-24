#include<iostream>
using namespace std;
int main()
{
	int n,j,count=0;
	cout<<"enter a no";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
cout<<count;
return 0;
}
