#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,c=0;
	cout<<"enter size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(a[i]!=-1)
	{
		cout<<a[i];
		c=c+a[i];
		i++;
	}
	cout<<c<<endl;
	return 0;
	
}
