#include<iostream>
using namespace std;
class xyz
{
	int a,b;
	public:xyz()
	{
	}
	xyz(int k)
	{
		a=k;b=0;
	}
	xyz (int x,int y)
	{
		a=x;
		b=y;
	}
	void display(){
		cout<<a<<b;
	}
	
};
int main()
{
	xyz c1;
	int s,e,f;
	cin>>e>>f;
	c1=(e,f);
	c1.display();
  // s=(int)xyz(c1);
//	cout<<s;
	
	return 0;
	
}
