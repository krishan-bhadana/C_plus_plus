#include<iostream>
using namespace std;
class book
{
	public:
	char title[15],author[15],publisher[15];
	int price;
	void getdata();
};
class bookissue:public book
{
	public:
	int book_issue_days;
};
class bookreturn:public book
{
	public:
	int book_return_days;
};
class bookfine:public book,public bookissue,public bookreturn
{
	public:
		int k;
		bookfine()
		{
			k=0;
		}
		int fines;
		void fine();
};
void bookfine::fine()
{
	int fine;
	cout<<"enter the days of eturning the book";
	cin>>book_return_days;
	if(book_issue_days>book_return_days)
	{
		cout<<"book returned";
	}
	else
	{
		if(book_return_days<=7)
		{
			cout<<"\nyour book is late\nyou have to pay fine of amount: "<<book_return_days;
			k--;	
		}
		else
		{
			if(book_return_days>7&&book_return_days<=15)
			{
				cout<<"\nyour book is late\nyou have to pay fine of amount: "<<5*book_return_days;	
				k--;
			}
			else
			{
				if(book_return_days>15&&book_return_days<=30)	
				{
					cout<<"\nyour book is late\nyou have to pay fine of amount: "<<10*book_return_days;
					k--;
				}
				else
				{
					cout<<"\nyour book is late\nyou have to pay fine of amount equal to the book: "<<price;
					k--;
				}
			}	
		}	
	}
}
void bookfine::getdata()
{
	if(k<1)
	{
	cout<<"\nnew book entry:\nenter the title of the book";
	gets(title);
	cout<<"enter the name of author";
	gets(author);
	cout<<"enter the name of publisher";
	gets(publisher);
	cout<<"enter the book issue days";
	gets(book_issue_days);
	cout<<"enter the price of the book";
	cin>>price;
	cout<<"book issued--\n";
	k++;
	}
	else
	{
		cout<<"\nyou can issue only one book at a time";
	}
}
int main()
{
	bookfine b;
	int ch=0;
	while(ch<=2)
	{
	cout<<"enter 1 for book issue\nenter 2 for return book/n3 for exit";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    		{
    		b.getdata();
			}
		case 2:
			{
			b.fine();	
			}
		case 3:
			{
				break;	
			}		
    		
	};
	};
	return 0;
}
