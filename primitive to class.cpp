#include<iostream>
using namespace std;
class a
{
	int x,y;
	public:void setdata(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<endl;
		cout<<y;
	}
	
	operator int()
	{
		return x;
	}
};
int main()
{
	a c;
	int x;
	c.setdata(3,5);
	c.display();
	x=c;
	cout<<c;
	return 0;
}
