#include<iostream>
using namespace std;
int a[100],n,i;
void create()
{
cout<<"enter no of element enter t be an array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}	
}
	void display()
	{
			
	for(int i=n;i>0;i--)
	{
		cout<<"created";
		cout<<a[i]<<endl;
		
	}		
}
void pop()
{
	for(int i=n;i>0;i--)
	{
		if(a[i]>a[0])
		{
		
	
		cout<<"pop item ="<<a[i-1]<<endl;
			cout<<"after pop"<<endl;
		cout<<a[i]<<endl;
	}
	else
	{
		cout<<"not sufficient item"<<endl;
	}
		
	}
}
	void push()
	{
		if(a[i]<a[n-1])
		{
			cout<<"enter items to push";
			int c;
			cin>>c;
			a[i]=c;
			for(int i=n-1;i>=0;i--)
	{
		
		cout<<"after push";
		cout<<a[i]<<endl;
	}
	
		
		}
	}
int main()
{
	int t;
	cout<<"enter your choice";
	cout<<"1 for pop \n 2 for push";
	cin>>t;
	
		

create();	
display();
switch(t)
	{
case 1:
 pop();
 break;
 case 2:
 push();
 break;
 default:cout<<"invalid";
}
return 0;	
}
