#include<iostream>
using namespace std;
int main()
{
	char c;
	int a=0;
	cout<<"enter a vaue";
	cin>>c;
	if(c>='a' && c<='z'||c>='A' && c<='Z')
	{
		cout<<"charracter";
	}
	else
	{
		cout<<"int";
	}
	return 0;
}
