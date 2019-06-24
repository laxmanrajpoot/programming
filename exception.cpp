//#include"demo.cpp"
#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
            if(x==1)
			throw x;
			else if(x==0)
			throw 'x';
			else if(x==-1)
			throw 1.0;
			
	}
	catch(char t)
	{
	cout<<"cought n char"<<t<<endl;
	
	}
	catch(int i)
	{
		cout<<"cout an int"<<i<<endl;
	}
	catch(double f)
	{
		cout<<"cought n float"<<f<<endl;
		throw;
	}

}
	

int main()
{
try{

	test(1);
	test(0);
	test(-1);
}

catch(float)
{
	cout<<"inside main rethrow ";
}
		
	return 0;
}
