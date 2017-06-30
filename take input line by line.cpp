#include <iostream>
#include <string.h>
#include <fstream>
#include<cstdlib>
using namespace std;
 
int main(){
 	int k=0,x[20],j=0;
 	char words[20][10];
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
	int r=rand()%20;
	 for(int i=0;i<=x[r];i++){
	 	cout<<words[r][i]<<".";
	 }
	 cout<<"\n"<<r;
	 for(int i=0;i<=5;i++){
	 
	 r=rand()%20;
	 cout<<"\n"<<r<<"\n";
}
		
}
