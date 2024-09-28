//c++ program for commission calculation
#include<iostream>
using namespace std;
int main()
{
	int s;
	char g;
	float com;
	cout<<"enter the salary:";
	cin>>s;
	cout<<"enter thye grade:";
	cin>>g;
	if(s>20000){
		com=s*0.10;
		cout<<"the commission is:"<<com;
			}
			else{com=s*0.5;
			cout<<"the commission is:"<<com;
			}	
			cout<<"\nGood Job";
}
