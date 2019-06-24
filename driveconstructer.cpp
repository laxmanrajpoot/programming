#include<iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			
		}
void show(void)
{
	cout<<x;
}

};
class beta
{
	float y;
	public:
		beta(float j)
		{
			y=j;
			
		}
		void show_y()
		{
			cout<<y;
		}
};
class gamma:public beta,public alpha
{
	int m,n;
	public:
		gamma(int a,float b,int c,int d): alpha(d), beta(b)
		{
		

m=c;n=d;

}
void show_mn()
{
	cout<<m;
	cout<<n;
	
}
};
int main()
{
	gamma g(5,10.5,20,30);
	g.show();
	g.show_y();
	g.show_mn();
	return 0;
}

