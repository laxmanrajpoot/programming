#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	protected:
		int d;
		public:
			void getdata()
		{
			cout<<"base";
		}
		virtual	void display()
			{
				cout<<"base";
				
			}
		
			
};
class b:public a
{
	protected:
		int c;
		public:void getdata()
		{
			cout<<"drive";
		}
		virtual	void display()
			{
				cout<<"drive";
			}
};

int main()
{
	b a1;a *p;
	p=&a1;
    p->getdata();
    p->display();
	return 0;
	
}

