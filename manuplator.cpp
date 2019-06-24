#include<iostream>
#include <iomanip>
using namespace std;
    int main()
    {
	    cout<<"USING setw() ..............\n";
	    cout<< setw(10) <<11<<endl;
	    cout<< setw(10) <<2568<<endl;
	    cout<< setw(10) <<33571<<endl;
	    cout<< setw(10) <<4<<endl;

	    cout<<"USING setw() & setfill()...\n";
	    cout<< setfill('0');
	    cout<< setw(10) <<11<<endl;
	    cout<< setw(10) <<2586<<endl;
	    cout<< setw(10) <<32317<<endl;
	    cout<< setw(10) <<4<<endl;

	    cout<<"USING setw() & setfill()...\n";
	    cout<< setfill('-')<< setw(10) <<11<<endl;
	    cout<< setfill('*')<< setw(10) <<2586<<endl;
	    cout<< setfill('@')<< setw(10) <<35278<<endl;
	    cout<< setfill('#')<< setw(10) <<4<<endl;
	    return 0;
    }
