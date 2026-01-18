#include <iostream>
using namespace std;
int main()
{
//declaring variables and taking input from user	
	int income;
	int age;
	cout<<"Enter your age"<<endl;
	cin >> age;
	cout<<"Enter your income"<<endl;
	cin >> income;
	
	if (income<30000)
	{
		
		if(age<18)
		{
			cout<<"You are not eligible for a loan because you are under 18 years of age."<<endl;
		}
		else
		{
			cout<<"You meet the age requirement but are not eligible for a loan because your income is below $30,000."<<endl;
		}
	}
	else
	{
		cout<<"Congratulations! You are eligible for a loan."<<endl;
	}
}
