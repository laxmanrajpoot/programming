#include<iostream>
using namespace std;
const int size=3;
template <class t>
class a
{
	t *v;
	public:a()
	{
		v=new t[size];
		for(int i=0;i<size;i++)
		v[i]=0;
	}
	a(t *a)
	{
		for(int i=0;i<size;i++)
		v[i]=a[i];
		
	}
	t operator*(a &y)
	{
		t sum=0;
		for(int i=0;i<size;i++)
		sum+=this->v[i]*y.v[i];
		return sum;
	}
};
int main()
{
	float x[3]={1.2,1.2,3.3};
	float y[3]={1.2,1.2,3.3};
	a<float>v1;
	a<float>v2;
	v1=x;
	v2=y;
	float r=v1*v2;
	cout<<"r"<<r;
	return 0;
	
}

