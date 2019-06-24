#include<iostream>
using namespace std;


class abc
{
	int a,b;
	public:
		abc()
		{
		a=b=0;	
		}
		abc(int x,int y)
		{
		a=x;
		b=y;	
		}
		void display()
		{
			cout<<a<<b<<endl;
			
		}
		abc operator [](abc);
};
abc abc::operator [](abc c)
{
	abc temp;
	temp.a=a+ c.a;
	temp.b=b+c.b;
	return temp;
	
	
}
int main()
{
	abc c1,c2,c3;
	int e,f,g,h;
	cout<<"enter values";
	cin>>e>>f;
	cin>>g>>h;
	c1=abc(e,f);
	c2=abc(g,h);
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}

