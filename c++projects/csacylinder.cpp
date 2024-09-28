//c++ program to find curved surface area of a cylinder 2*3.14*radius*height
#include<iostream>
using namespace std;
int main()
{ 
float r;
float h;
float area;
cout<<"enter the radius of cylinder:";
cin>>r;
cout<<"\nenter the height of cylinder:";
cin>>h;
area=2*3.14*r*h;
cout<<"\nCSA of Cylinder is:"<<area;
}
