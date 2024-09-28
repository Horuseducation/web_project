#include<iostream>
using namespace std;
class student
{
int rno,marks;
public:
	student(int r,int m)
	{cout<<"constructor"<<endl;
	rno=r;
	marks=m;
	}
	void printdet()
	{
		marks=marks+30;
		cout<<"barathi"<<endl;
		cout<<"roll no:"<<rno<<"\n";
		cout<<"marks:"<<marks<<endl;
	}
};
int main()
{student s(14,70);
s.printdet();
cout<<"back to main";
return 0;
}
