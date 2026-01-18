#include <iostream>
using namespace std;
int main()
{
	int num;
	int accountCreationYear;
	int year;
	int year1;
	cout <<"Enter your salary"<<endl;
	cin >> num;
	cout<<"Enter the year in which you created your account"<<endl;
	cin>> accountCreationYear;
	cout<<"Enter the present year"<<endl;
	cin >> year1;
	year=year1-accountCreationYear;
	
	
		if(num>=25000)
	{
	cout <<"Account is eligible for Loan"<<endl;	
	}
	
		if(num>=20000 && year>=5)
	{
	cout <<"Account is eligible for Loan"<<endl;	
	}
	
}
