#include<iostream>
using namespace std;
class student
{
	protected:
		int roll;
		public:
			void get_n(int d)
			
			{
				roll =d;
			}
			void display(void)
			{
				cout<<roll;
			}
			
};
class test:public student
{
	protected:
		float sub1,sub2;
		public:
			void get_marks(float x,float y)
			{
				sub1 x;
				sub2=y;
			}
			void put_marks(void)
			{
			
			cout<<sub1<<endl;
	        cout<<sub2<<endl;
}
};
	
class result:public student
{
	protected:
	float total;
	public:
		void display(void);
};
void result::display(void)
{
	total=sub1+sub2;
	display();
	put_marks();
	cout<<total;
}

int main()
{
	result q;
	test r;
	q.get_n(111);
	r.getmarks(75.0,55.6);
	r.putmarks();
	r.display();
	q.display();
	return 0;
}
