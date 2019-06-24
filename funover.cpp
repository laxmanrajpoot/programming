#include<iostream>
using namespace std;
class space
{
	int a;
	int b;
	public:
		space()
		{
		}
		void getdata(int a,int b);
		void display();
		void operator -();
		
};
void space::getdata(int a,int b)
{
	cin>>a>>b;

}
void space::display()
{
	cout<<a;
	cout<<b;
	
}
void space::operator -()
{
	a=-a;
	b=-b;
}
int main()
{
	space s;
	//	s.getdata(a,b);
		int x,y;
	cin>>x>>y;
//	s.getdata(a,b);
//	cout<<s<<endl;
	s.display();
	-s;
	cout<<"s: ";
	s.display();
	return 0;
}
