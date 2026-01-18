#include<iostream>
using namespace std;
int num,n,facto=1,i;
int fact(int n)
{
	for(i=1; i<=n; i++)
	{
		facto=facto*i;
	}
	return facto;
}
int main()
{
	cout<<"Enter the number of which you want to print Factorial"<<endl;
	cin>>n;
	fact(n);
	cout<<"The Factorial of te given number:"<<n<<" is:"<<facto<<endl;
}
