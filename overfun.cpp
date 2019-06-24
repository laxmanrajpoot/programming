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
			complex operator -();
			void display();
		
		};
		complex complex::operator -()
		{
		/*	complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return(temp);*/
			x=+x;
			y=+y;
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
	
