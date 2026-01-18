#include<iostream>
using namespace std;
int main()
{
//declaring variables
	int n;
	int i=0;
//taking input from user
	cout<<"Enter the number of which you want the table to print"<<endl;
	cin>>n;
//using for loop to print table
	while(i<=10)
	{
		 i++;
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
