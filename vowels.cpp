#include<iostream>
using namespace std;
int main(){
	char s;
	cout<<"enter";
	cin>>s;
	char c=( s=='a'||s=='e'||s=='i'||s=='o'||s=='u');
	char t=(s=='A'||s=='E'||s=='I'||s=='O'||s=='U');
	if(c||t)
	 {
	
			cout<<"vowels"<<s;
		}
		else
		{
		cout<<"contonants";	
		}
	}
