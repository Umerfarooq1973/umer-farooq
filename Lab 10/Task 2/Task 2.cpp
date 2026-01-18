#include<iostream>
using namespace std;
int numbers(int a)
{
	if(a%2==0)
	{
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd"<<endl;
	}
}
int main()
{	
	int num;
	cout<<"Enter a nmber you want to check"<<endl;
	cin>>num;
	numbers(num);
}
