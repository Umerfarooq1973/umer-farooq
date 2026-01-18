#include<iostream>
using namespace std;
int main()
{
//declaring variables
	int n,i;
	cout<<"Enter the Number whose table you want to print"<<endl;
	cin>>n;
//using for loop 
	for(i=1; i<=10; i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
