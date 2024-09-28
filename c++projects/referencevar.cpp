//reference variable in c++
#include<iostream>
using namespace std;
int main()
{
int num1;
int &name=num1;
cout<<"enter the number:";
cin>>num1;
cout<<"reference variable="<<name;
}
