#include<iostream>  
#include<iomanip>   

using namespace std;    


class item  
{  
        int code;    
		       char name[15]; 

    public:     
        void input()    
        {
            cout<<"\n\n\t Enter Item Code : ";
            cin>>code;

            cout<<"\n\n\t Enter Item Name : ";
            cin>>name;  

            cout<<"\n\n\t Enter Item Price : ";
            cin>>price; 
        }
        void output();  
    private:    
        float price;   

}i1; 

void item::output() 
{
    cout<<"\n\n\t "<<setw(8)<<code; 
    cout<<setw(15)<<name;

    cout<<setw(7)<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::left)<<price;
       cout<<resetiosflags(ios::left); 
    cout<<"\n\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
}
int main()
{
    item i2;    

    cout<<"\n______________________________________";

    cout<<"\n\n Enter Details for Item 1 : ";

    cout<<"\n______________________________________";

    i1.input(); 

    cout<<"\n______________________________________";

    cout<<"\n\n Enter Details for Item 2 : ";

    cout<<"\n______________________________________";

    i2.input(); 

    cout<<"\n______________________________________";

   cout<<"n\n Details of 2 Items       : ";
    cout.setf(ios::left,ios::adjustfield);   
    cout<<"\n\n\t"<<"Code ";
    cout.width(15);  
    cout<<"Name ";
    cout.width(7);   
    cout<<"Price ";

    cout<<"\n\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";

    i1.output();    
    i2.output();    

    cout<<endl;     

    return 0;
}
