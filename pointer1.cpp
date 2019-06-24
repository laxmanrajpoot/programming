#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	public:
		void f1()
	{
		cout<<"base f1"<<endl;
		
	}
	virtual void f2()
	{
		cout<<"base f2"<<endl;
		
	}
	virtual void f3()
	{
		cout<<"base f3"<<endl;
	}
	virtual void f4()
	{
		cout<<"base f4"<<endl;
	}
};
class b:public a
{
	public:
	void f1()
	{
		cout<<"drive f1"<<endl;
		
	}
	 void f2()
	{
		cout<<"drive f2"<<endl;
		
	}
 void f3()
	{
		cout<<"drive f3"<<endl;
	}
void f4()
	{
		cout<<"drive f4"<<endl;
	}
	
};
int main()
{
	//why all base class fun call with virtual
	b b1;
	a *p;
	
	p=&b1;
	p->f1();
	p->f2();
	p->f3();
	p->f4();
	return 0;
}
