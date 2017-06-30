#include<iostream>
#include<windows>
#include<conio>
using namespace std;
main()
{
while(true)
{
	if(GetAsyncKeyState(VK_RETURN))
	{
			cout<<"hello";
			break;}
}
getch();
	return 0;

}
