#include<iostream>
using namespace std;
int main()
{
	char signalColor;
	cout<<"Enter the signal color"<<endl;
	cin>>signalColor;
	
	
	if(signalColor=='r' || signalColor=='R')
	{
		cout<<"STOP"<<endl;
	}
	
	
	
		if(signalColor=='g' || signalColor=='G')
	{
		cout<<"GO"<<endl;
	}
	
	
	
	
		if(signalColor=='y' || signalColor=='Y')
	{
		cout<<"SLOW DOWN"<<endl;
	}
	
		
}

