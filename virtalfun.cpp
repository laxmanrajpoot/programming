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
			virtual void display()
			{
				cout<<"base display"<<endl;
				
			}
		
			
};
class b:public a
{
	protected:
		int c;
		public:void getdata()
		{
			cout<<"drived";
		}
			void display()
			{
				cout<<"drived display";
			}
};

int main()
{
	a a1,*p;
	b b1,*ptr;
	p=&a1;
    p->getdata();
    p->display();
    p=&b1;
    p->getdata();
    p->display();
    
	return 0;
	
}

