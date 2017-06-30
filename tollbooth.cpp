#include<iostream>
#include<windows.h>
using namespace std;
class booth
{
int cars;
double cash;
public:
booth();
void payingcar();
void nopaycar();
void display();	
};
booth::booth()
{
	cars=0;
	cash=0;
}
void booth::payingcar()
{
	++cars;
	cash=cash+0.5;
}
void booth::nopaycar()
{
	++cars;
}
void booth::display()
{
	cout<<"total no of cars is :"<<cars<<"\n";
	cout<<"total amount of cash is :"<<cash;
}
main()
{
	booth a;
	cout<<"enter A for paying cars and B for non paying cars\n";
	while(true)
{
	if(GetAsyncKeyState(VK_ESCAPE))
	{
		a.display();
		Sleep(1000);	
			break;
	}
	else
	{
		if(GetAsyncKeyState(0x41))
		{
			a.payingcar();
			cout<<"car and amount counted\n";
			Sleep(1000);
			continue;
		}
		else
		{
			if(GetAsyncKeyState(0x42))
			{
				a.nopaycar();
				cout<<"car counted\n";
				Sleep(1000);
				continue;
			}
		}
	}
}
return 0;
}
