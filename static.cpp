#include<iostream>
using namespace std;
class item
{
	static int count;
	int no;
	public:
		void getdata(int a)
		{
		no=a;
		count++;
		}
		void getcount(void)
		{
		cout<<count<<endl;
		}
		
};
 int item::count;
int main()
{
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	
	a.getdata(10);
	b.getdata(20);
	c.getdata(30);
	
	a.getcount();
	b.getcount();
	c.getcount();
		
	return 0;

}
