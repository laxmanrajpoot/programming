#include<iostream>
using namespace std;
template<class t>
void add(t a,t b)
{
	cout<<"tempalte"<<endl;
}
template<class t>
void add(t x,t y,t z)
{
	cout<<"template 3"<<endl;
	
}
void add(float v, float z)
{
	cout<<"non template;";
}
int main()
{
	add(1.5,3.5);
	add('a','b','c');
	add(1,7.5);
	return 0;
}
