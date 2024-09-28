//c++ program to find perimeter 3.14*r+2r and area of semi circle3.14+r2/2
#include<iostream>
using namespace std;
int main()
{
float r;
float peri;
float area;
cout<<"enter the radius:";
cin>>r;
peri=3.14*r+2*r;
area=3.14+r*r/2;
cout<<"\nPerimeter of Semicircle:"<<peri<<"\n";
cout<<"\nArea of Semicircle:"<<area;
}
