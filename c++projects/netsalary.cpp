//c++ program to calculate the net salary
#include<iostream>
using namespace std;
int main()
{
float basic,da,hra,gpf,tax,gross,np;
cout<<"enter the Basic pay:"<<"\n";
cin>>basic;
cout<<"\nenter the Dearness allowance:";
cin>>da;
cout<<"\nenter the House rent allowance:";
cin>>hra;
gross=basic+da+hra;
gpf=(basic+da)*0.10;
tax=gross*0.10;
np=gross-(gpf+tax);
cout<<"Basic Pay:"<<basic <<"\n"<<"\nHouse rent allowence:"<<hra <<"\n"<<"\nDearness allowence:"<<da <<"\n" <<"\nGross:"<<gross <<"\n" <<"\nGPF:"<<gpf <<"\n" <<"\nTax:"<<tax <<"\n" <<"\nNP:"<<np;
}
