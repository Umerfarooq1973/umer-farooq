#include <iostream>
using namespace std;
int main()
{
//declaring and taking input from user	
	int num;
	cout <<"Enter a Temprature"<<endl;
	cin >> num;
	
//checking the state of temprature	
	if(num<0)
	{
		cout<<"Temprature is below zero point"<<endl;
	}
	else if(num>0)
	{
		cout<<"Temprature is above freezing point"<<endl;
	}
	else
	{
		cout<<"The Temprature is at freezing point"<<endl;
	}
	
	cout<<"advise"<<endl;
	
	
//Advise for user about temprature today is	
	if(num>=40)
	{
		cout<<"Dear USER! Please stay indoors because it is extremely hot and could be dangerous to health"<<endl;
	}
	else if(num>=30 && num<=39)
	{
		cout<<"Dear USER! Please drinking plenty of water to stay hydrated in the hot weather"<<endl;
	}
	else if(num>=20&& num<=29)
	{
		cout<<"Dear USER! The weather is pleasant and suitable for outdoor activities"<<endl;
	}
	else if(num>=0 && num<=19)
	{
		cout<<"Dear USER! wear warm clothes to stay comfortable in the cooler weather"<<endl;
	}
	else
	{
		cout<<"Dear USER! The tempratuer is below Freezing point you should stay in and wear warm clothes and burn fire or heater"<<endl;
	}
	
	
}
