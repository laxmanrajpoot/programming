#include<iostream>
using namespace std;
class b
{
int a;
public:
	int b;
	void get();
	void show();
		
		
};
class d:public b
{
	int c;
	public:
		void mul();
		void display();
		
};
void b::get()
{
	cout<<"enter values ";
	cin>>a>>b;
	
}
void b::show()
{
	cout<<a;
	
}
void d::mul()
{
	get();
	c=b*get();
}
void d::display()
{
	show();
	cout<<b<<endl;
	cout<<c;
}
int main()
{
	d v;
	v.get());
	v.mul();

	v.show();
	d.mul();
	d.display();
	return 0;
}































