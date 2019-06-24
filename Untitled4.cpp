#include<iostream>
using namespace std;
class complex
{
	float x; float y;
	public:
	complex()
		{}
		complex(float real,float imag)
		{
			x=-real;
			y=-imag;
		}
		complex operator +(complex c);
			void display();
		
		};
		 complex::operator +(complex c)
		{
			complex temp;
			temp.x=c.x+x;
			temp.y=c.y+y;
			return(temp);
			
		}
		void complex::display()
		{
			cout<<x<<"+j"<<y<<endl;
			
		}
		int main()
	{
		complex c1,c2,c3;
		int a,b;
		cin>>a>>b;
		c1=complex(a,b);
		c2=complex(1.6,2.7);
	//	c3=c1-c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
	
	}
	
