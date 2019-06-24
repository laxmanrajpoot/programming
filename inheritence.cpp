#include<iostream>
using namespace std;
class b
{
	int a;
	public:
		int b;
		int get();
		int get_a();
		void show();
};
class d:public b
{
	int c;
	public:void mul();
	void display();
	
};
void d::get ()
{
	a=5;c=10;
}
int b::get_a()
{
	return a;
}
void b::show()
{
	cout<<a;
	
}
void d::mul() 
{
	c=b*get();
	
	void d::display()
	{
		cout<<get();
		cout<<b;
		cout<<c;
	}
	int main()
	{
		d x;
		x.get();
		x.get_a();
		x.show();
		x.display();
		x.b=20;
	x.mul();
	x.display();
	return 0;
}
