#include<iostream>
using namespace std;
int main()
{
//declaring and taking input from user 	
	int day;
	cout<<"Enter a number from 1 to 7"<<endl;
	cin >> day;
//creating a simple days claneder 
	if(day>=1 && day<=7)
	{
		switch(day)
		{
			case 1:
				cout<<"Today is Monday"<<endl;
				break;
			case 2:
				cout<<"Today is Tuesday"<<endl;
				break;
			case 3:
				cout<<"Today is Wensday"<<endl;
				break;
			case 4:
				cout<<"Today is Thuesday"<<endl;
				break;
			case 5:
				cout<<"Today is Friday"<<endl;
				break;
			case 6:
				cout<<"Today is Saturday"<<endl;
				break;
			case 7:
				cout<<"Today is Sunday"<<endl;
				break;					
		}
	}
	else
	{
		cout<<"invalid number"<<endl;
	}
}




