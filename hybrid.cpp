#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		public:
			void getnum(int a)
			{
				rollno=a;
			}
			void putnum()
			{
				cout<<"roll number is"<<rollno<<"\n";
			}
			
};
class test:public student
{
	protected:
		float part1,part2;
		public:
			void getmarks(float x,float y)
			{
				part1=x;
				part2=y;
			}
			void putmarks()
			{
				cout<<"marks obtained=\n"<<"part1:"<<part1<<"\npart2:"<<part2;
			}
};
class sports	
{
	protected:
		float score;
		public:
			void getscore(float s)
			{
				score=s;
			}
			void putscore()
			{
				cout<<"sports weight"<<score;
			}
};
class result:public test,public sports
{
	float total;
	public:
		void display();
};
void result::display()
{
	total=part1+part2+score;
	putnum();
	putmarks();
	putscore();
	cout<<"total score="<<total;
}
int main()
{
	result student1;
	student1.getnum(1234);
	student1.getmarks(27.5,43);
	student1.getscore(6);
	student1.display();
	return 0;
}
