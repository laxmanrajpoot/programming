#include<iostream>
using namespace std;
class a
{
	int x,y;
	public:a(
	)
	{
	x=y=0;	
	}
	a(int k)
	{
		x=k;
		y=0;
	}
	a(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<endl;
		cout<<y;
	}
	a:: mul(int x,int y)
	{
		return a*b;
	}
};
int main()
{
	a c;
	int e,f;
	cout<<"enter values";
	cin>>e>>f;
	a c2(e,f);
	c=c2;
	c.display();
	c.mul();
	return 0;
}
