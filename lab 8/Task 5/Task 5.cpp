#include<iostream>
using namespace std;
int main()
{
//declaring variables
	int n,i;
	long long fact=1;
	cout<<"Enter the number of which you want to print factrioal"<<endl;
	cin>>n;
//using for loop to calculate factorial
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial Of the Given number "<<n<<" is:"<<fact<<endl;
}
