#include<iostream>
#include<conio.h>
#include<cstdlib>
#include <string>
#include <fstream>
#include<windows.h>
using namespace std;
main(){
 char a;
 int i=0;
 char password[20];
	cout<<"\nPlayer 2 :enter the WORD\n";
		while(!GetAsyncKeyState(VK_RETURN)){
		a=getch();
		password[i]=a;
		i++;
		printf("*");}
		string word=password;
		cout<<word;
	}
