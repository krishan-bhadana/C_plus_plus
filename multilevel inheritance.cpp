#include<iostream>
using namespace std;
class stu
{
	public:
	char name[10],roll[20];
	int sem;
	void insert();
};
class marks:public stu
{
	public:
	float total,sub1,sub2;
	void addmarks();
};
class result:public marks
{
	public:
	float p;
	void percentage();
	void display();
};
void stu::insert()
{
	cout<<"enter the name :";
	cin>>name;
	cout<<"enter the roll no :";
	cin>>roll;
	cout<<"enter the sem :";
	cin>>sem;
}
void marks::addmarks()
{
	cout<<"entee the marks of sub1 and sub2";
	cin>>sub1>>sub2;
	total=sub1+sub2;
}
void result::percentage()
{
	p=(sub1+sub2)/2;
}
void result::display()
{
	cout<<"Yourname is :"<<name<<"\nroll no :"<<roll<<"\nsem :"<<sem<<"\nsub1 :"<<sub1<<"\nsub2 :"<<sub2;
	cout<<"\ntotal marks :"<<total<<"\npercentage :"<<p;
}
int main()
{
	result d;
	d.insert();
	d.addmarks();
	d.percentage();
	d.display();
	return 0;
}
