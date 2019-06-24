#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream f("testout1.txt");  
  if (f.is_open())  
  {  
    f<< "C:/Users/dell/Downloadskuiper.xls";  
    f << "C++ Tutorial.\n";  
    f.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}
