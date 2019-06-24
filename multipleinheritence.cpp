#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
		public:
			void getdata(int p)
			{
				x=p;
			}
};
class b:public a
{
	protected:
		int c;
		public:
			void get(int b)
			{
				c=b;
			}
			void display();
		
};
void b::display()
{
	cout<<x+c<<endl;
}
class c :public a,public b
{
	public:
		void display()
			{
			
			cout<<x<<endl;
			cout<<c;
		}
};
int main()
{
	c b;
	b.getdata(20);
	b.get(30);
	b.b::display();
	b.display();
	return 0;
}
