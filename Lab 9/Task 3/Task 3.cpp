#include<iostream>
using namespace std;
int main()
{
//intialzing and declaring varibles 
	int n,avg;
	int sum=0;
	int numbers[5]={1,2,3,4,5};
//calculatin sum
	for(n=0; n<=4; n++)
	{
		sum=sum+numbers[n];
	}	
	cout<<sum<<endl;
	avg=sum/5;
	cout<<avg<<endl;
}
