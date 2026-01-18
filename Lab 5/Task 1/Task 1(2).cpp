#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	if(n>0)
	{
		cout<<"Number you entered is \33[32mPositive\33[0m"<<endl;
	}
	else if(n<0)
	{
		cout<<"The number you entered is \33[31mNegative\33[0m"<<endl;
	}
	else
	{
		cout<<"The number you input is Zero"<<endl;
	}
}
