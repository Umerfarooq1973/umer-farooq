#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(n<=0)
	{
		cout<<"\33[31mEnter the apporiate number (positive number)\33[0m"<<endl;
		cin>>n;
	}
	cout<<"\33[32mThe number you entered is positive:"<<n<<"\33[0m"<<endl;
}
