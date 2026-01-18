#include <iostream>
#include <string>
#define name1 "admin"
#define PASSWORD "12325"
using namespace std;
int main()
{
//declaring variables and taking input the user name and passowrd
	string name;
	string password;
	cout<<"Enter your User Name"<<endl;
	cin >>name;
	cout<<"Enter your Password"<<endl;
	cin >>password;
	
//checking the user name,password and there asscess
	if(name==name1 && password==PASSWORD)
	{
		cout<<"\033[32mAccess Granted\033[0m"<<endl; //green text
	}
	else if(name!=name1)
	{
		cout<<"\033[31mWrong User name\033[0m"<<endl; // red text
	}	
	else
	{
		cout <<"\033[31mWrong password\033[0m"<<endl; //red text
	}
}
