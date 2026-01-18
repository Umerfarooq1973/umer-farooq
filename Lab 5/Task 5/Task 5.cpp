#include <iostream>
#include <string>
#define NAME "admin"
#define PASSWORD "password123"
#define NAME1 geust
#define NAME3 user
using namespace std;
int main()
{
//declaring	 and taking input from user
	string name;
	string password;
	cout <<"Enter your user name"<<endl;
	cin >> name;
	cout <<"Enter your password"<<endl;
	cin >> password;
	
	
//verifing user for authentication	
	if(name==NAME && password==PASSWORD)
	{
		cout<<"\033[32mAuthentication Successful!\033[0m"<<endl;
	}
	else
	{
		cout<<"\033[31mAuthentication Failed. Access Denied.\033[0m"<<endl;
	}
	
//checking access level	
	if (name=="admin")
	{
		cout<<"\033[32mFull Access\033[0m"<<endl;
	}
	else if(name=="geust" || name=="Geust")
	{
		cout<<"\033[34mLimited Access\033[0m"<<endl;
	}
	else
	{
		cout<<"\033[31mAccess Denied\033[0m"<<endl;
	}
	system("pause");
}
