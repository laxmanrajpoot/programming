#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float a,b,c,qua,qua2,qua3,img,i;
cout<<"enter value of  a,b and c";
cin>>a>>b>>c;
qua=b*b-4*a*c;
if(qua>0)
{

qua2=(-b+sqrt(qua))/(2*a);
qua3=(-b-sqrt(qua))/(2*a);
cout<<"roots are\n"<<qua2<<endl<<qua3;
}
else if(qua==0)
{
	qua2=-b/(2*a);
	cout<<qua2;
}
else
{
	i=-b/(2*a);
	img=sqrt(-qua)/(2*a);
	cout<<"roots are"<<i<<endl<<img;
	
	
}
return 0;	
}
