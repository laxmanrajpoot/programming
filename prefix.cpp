#include<iostream>
using namespace std;
class weight
{
	int kg;
	public:weight()
	{
	kg=0;}
	weight(int x)
	{
		kg=x;
	}
void printweight()
{
	cout<<"weight in kg="<<kg<<endl;
}
weight operator ++()
{
	weight temp;
	temp.kg=++kg;
	return temp;
}
void operator ++(int )
{
	kg++;
}
}obj=10;
int main()
{
	weight obj(10),obj2(3);
	//obj2=++obj1;
	obj1.printweight();
	return 0;
}
