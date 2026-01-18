#include<iostream>
#define PASSWORD 1234
using namespace std;
int main()
{
	int password;
	cout<<"Enter the Password"<<endl;
	cin >>password;
	do
	{
		if(password != PASSWORD)
		{
			cout<<"\33[31mThe password is incorrect\33[0m"<<endl;
		}
		cout<<"Enter the correct password"<<endl;
		cin>>password;
	}
	while(password!=PASSWORD);
	cout<<"\33[32mThe Passowrd you entered is correct\nACCESS GRANTED\33[0m"<<endl;
}
