#include<iostream>
using namespace std;
int main(){
	char sq1,sq2,sq3,sq4,sq5,sq6,sq7,sq8,sq9;
	sq1=sq2=sq3=sq4=sq5=sq6=sq7=sq8=sq9=' ';
	int flag=0,choice,turn=0;
	while(turn<9&&flag!=1){
	system("cls");
	cout << "\n\n       " << sq1 << "  |  " << sq2 << "  |  " << sq3 << endl;
			cout << "     -----+-----+-----" << endl;
			cout << "       " << sq4 << "  |  " << sq5 << "  |  " << sq6 << endl;
			cout << "     -----+-----+-----" << endl;
			cout << "       " << sq7 << "  |  " << sq8 << "  |  " << sq9 << endl;
			cin>>choice;
			switch(choice){
				case 1:
					if(turn%2==0)
					sq1='X';
					else
					sq1='O';
					break;
				case 2:
					if(turn%2==0)
					sq2='X';
					else
					sq2='O';
					break;
				case 3:
					if(turn%2==0)
					sq3='X';
					else
					sq3='O';
					break;
				case 4:
					if(turn%2==0)
					sq4='X';
					else
					sq4='O';
					break;	
				case 5:
					if(turn%2==0)
					sq5='X';
					else
					sq5='O';
					break;	
				case 6:
					if(turn%2==0)
					sq6='X';
					else
					sq6='O';
					break;	
				case 7:
					if(turn%2==0)
					sq7='X';
					else
					sq7='O';
					break;									
				case 8:
					if(turn%2==0)
					sq8='X';
					else
					sq8='O';
					break;		
				case 9:
					if(turn%2==0)
					sq9='X';
					else
					sq9='O';
					break;		
			}
			if(sq1==sq5==sq9||sq1==sq4==sq7||sq2==sq5==sq8||sq3==sq6==sq9||sq3==sq5==sq7){
				if(turn%2==0)
				cout<<"'X' WIns";
				else
				cout<<"'Y' WIns";
			}
			turn++;
		}
		
}
