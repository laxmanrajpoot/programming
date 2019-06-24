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
		space (int x,int y)
		{
			a=-x;
			b=-y;
			
			
		}
		void display()
		{
			cout<<a<<b<<endl;
		}
		void operator -();
		
};
void space::operator -()
{
	a=-a;
	b=-b;
	
}
int main()
{
	space s;
	int x,y;
	cin>>x>>y;
	space (x,y);
	s.display();
	return 0;
	
}
