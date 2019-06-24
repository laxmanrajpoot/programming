#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code()
		{
			
		}
		code(int a)
		{
			id=a;
		}
		code(code& x)
		{
			id=x.id;
		}
		void display()
		{
			cout<<id;
		}
	};
	int main()
	{
		code A(100);
		code B(A);
		code c=A;
		A.display();
		B.display();
		c.display();
		//D.display();
	return 0;	
		
	}
