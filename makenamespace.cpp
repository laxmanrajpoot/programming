#include<iostream>
using namespace std;
namespace A{
	int  add(int a,int b)
	{
		cout<<a+b;
		
	}
}
namespace B
{
	int mul(int a,int b)
	{
		cout<< a*b;
	}
}
using namespace A;
int main()
{
	add(12,23);
B::mul(4,1);
	return 0;
	
}
