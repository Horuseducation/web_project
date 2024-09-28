//c++ program to find the grade of a student
#include<iostream>
using namespace std;
int main()
{
	string n;
	int m1,m2,m3;
	int total;
	cout<<"Enter the student name:";
	cin>>n;
	cout<<"enter the mark of three subjects";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	cout<<"\ntotal:"<<total<<"\n";
	if(total>280){cout<<"\ngrade is A";
	}
	else if(total>200){cout<<"\ngrade is B";}
	else if(total>150){cout<<"\ngrade is c";}
	else if(total>100){cout<<"\ngrade is D";}
	else{cout<<"\nSorry..! You have failed";
	}
}
