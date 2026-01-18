#include <iostream>
using namespace std;
int main()
{
//declaring variables	
	int n,i,sum=0;
	cout<<"Enter the number upon which you want to print SUM"<<endl;
	cin>>n;
//using for loop to print the sum
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;
}
