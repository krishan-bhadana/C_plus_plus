#include<iostream>
#include<cstdlib>   \\for string matching and also for using rand() function
#include <string>
#include <fstream>
#include <windows.h>  \\for interacting with windows for detecting the keypress
#include <conio.h>
using namespace std;
char word[10];
string question(int);
int game();
char choice(){
		char choice;
		cout<<"\n\n\t\t\t''''''''''''''''BOLLYWOOD''''''''''''''''";
		cout<<"\n(1) : 1 Player\n(2) : 2 Player\n(Q) : Quit\n";
		cin>>choice;
		return (choice);
}
int question(char choice){
	if(choice=='1'){
		char words[20][10];
		int r,j=0,x[20];
 		int k=0;
		string line;
		ifstream f ("file.txt");
		getline(f, line);
   		const char * cs = line.c_str ();
    	int n=line.length();
    	for(int i=0;i<n;i++,j++){
    		if(cs[i]==' '){
    		x[k]=j-1;
			k++;
			j=-1;
			}
    		else
    		words[k][j]=cs[i];
		}
	r=rand()%20;
	 for(int i=0;i<=x[r];i++){
	 	word[i]=words[r][i];
	 }
	}

	if(choice=='2'){
		char a,password[10];
		int i=0,flag=0;
		cout<<"\nPlayer 2 :enter the WORD,end with '.'\n";
		while(flag!=1){
			a=getch();
			if(a=='.'){
				flag=1;
				continue;
			}
			else{
			word[i]=a;
			i++;
			printf("*");}}
		}
	if((choice== 'Q' || choice=='q')){
		return 1;
	}
}
int main(){
	label:
	char choicee;
	int flag,result;
	while(choicee!='quit'){
	choicee=choice();
	flag=question(choicee);
	if(flag==1)
	return 0;
	result=game();
	if(result==1){
		cout<<"\n\nCONGRATULATIONS!!!!\nWANNA PLAY AGAIN?? (Y/N)";
		cin>>choicee;
		if(choicee=='y')
		goto label;
		else
		return 0;
	}
	else
	cout<<"\n\t\t\t\tOOPS!!!\tThe Word Was ''"<<word<<"''\nWANNA PLAY AGAIN?? (Y/N)";
	cin>>choicee;
		if(choicee=='y')
		goto label;
		else
		return 0;
	}
}
int game(){
	int n,i,k=0,guess=3,flag;
	string temp=word;
	n=temp.length();
	char blanks[10],used[27];
	for(i=0;i<n;i++)
	blanks[i]='_';
	while(guess!=0){
		cout<<"\n\n\t\t\t\t\t";
		for(i=0;i<n;i++)
		cout<<" "<<blanks[i];
		cout<<"\n Used:";
		for(i=1;i<=k;i++)
		cout<<used[i]<<",";
		flag=0;
		for(i=0;i<n;i++){
			if(blanks[i]==word[i])
			flag++;
		}
		if(flag==n)
		return 1;
		flag=0;
		cout<<"\n\nYou Have "<<guess<<"Try Left: ";
		++k;
		cin>>used[k];
		for(i=0;i<n;i++){
			if(used[k]==word[i]){
			blanks[i]=used[k];
			flag=1;
			}
		}
		if(flag==0)
		guess--;
		
	}
	if(guess==0)
	return 0;
}
