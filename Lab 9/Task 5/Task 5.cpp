#include<iostream>
using namespace std;
int main()
{
//declaring the variables and array
	int n,i,larg;
	int integers[5];
//intializing array
	for(i=0; i<=4; i++)
	{
		cout<<"Enter the Itervals of array"<<endl;
		cin>>integers[i];
	}
	larg=integers[0];
//checking the largest number
	for(i=0; i<=4; i++)
	{
		if(integers[i]>larg)
		{
			larg=integers[i];
		}
	}
	cout<<larg<<" Is the largest Number"<<endl;
}
