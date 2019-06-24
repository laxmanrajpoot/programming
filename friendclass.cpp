#include <iostream>  
  
using namespace std;  
  
class A  
{  
    int x =5;  
    private:void add()
    {
    	cout<<"laxman";
	}
    friend class B;           // friend class.  
};  
class B  
{  
  public:  
    void display(A a)  
    {  
        cout<<"value of x is : "<<a.x;  
        a.add();
    }  
};  
int main()  
{  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}  
