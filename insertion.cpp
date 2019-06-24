#include<iostream>
using namespace std;
const int size=3;
class A
{
	int v[size];
	public:
		A();
		A(int *x);
	//	friend A operator *(int a,A b);
	//	friend A operator *(A b,int a);
		friend istream & operator >>(istream &,A &);
		friend ostream & operator <<(ostream &,A &);
	};
	A::A()
	{
		for(int i=0;i<size;i++)
		v[i]=0;
	}
	A::A(int *x)
	{
		for(int i=0;i<size;i++)
		v[i]=x[i];
	}
/*	A operator *(int a,A b)
	{
		A c;
		for(int i=0;i<size;i++)
		c.v[i]=a*b.v[i];
		return c;
	}*/
/*	A operator *(A b,int a)
	{
		A c;
		for(int i=0;i<size;i++)
		c.v[i]=b.v[i]*a;
		return c;
	}*/
istream & operator >>(istream &din,A &b)
{
	for(int i=0;i<size;i++)
	din>>b.v[i];
	return (din);
	
}
ostream & operator <<(ostream &dout,A &b)
{
	dout<<b.v[0];
	for(int i=1;i<size;i++)
	dout<<b.v[i];
	return (dout);
	
}
//int x[size]={2,4,6};
int main()
{
	A m;
	A n=x;
	cout<<"enter element of m";
	cin>>m;
	cout<<m;
	A p,q;
	//p=2*m;
//	q=n*2;
	cout<<p;
	cout<<q;
	return 0;
	
	
}
