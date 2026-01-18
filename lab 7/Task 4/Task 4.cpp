#include<iostream>
#define DEFAULT_BALANCE 1000
using namespace std;
int main()
{
//declaring variables	
	int n;
	int balance;
	int deposit,withdraw;
	balance = DEFAULT_BALANCE;
	int choice;
//taking input from user in while loop
	while(n!=4)
	{
		cout<<"Choose the OPREATION you want to preform\n1.	depositing\n2.	withdrawl\n3.	check Balance\n4.	exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the Ammount of money you want to deposit"<<endl;
				cin >>deposit;
				balance+=deposit;
				cout<<"Updated Balance:"<<balance<<endl;
				break;
			case 2:
				cout << "Enter the amount of money to withdraw"<<endl;
				cin >> withdraw;
				balance-=withdraw;
				if(withdraw>balance)
				{
					cout<<"Insufficent Balance"<<endl;
				}
				balance-=withdraw;
				cout <<"Updated Balance:"<<balance<<endl;
				break;
			case 3:
				cout<<"Your Balance is:"<<balance<<endl;	
		}
		

		cout << "Do you want to cotinue the opreations or exit"<<endl;
		cin >> n;
	}
}
