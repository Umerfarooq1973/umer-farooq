#include<iostream>
using namespace std;
//declaring global variables
int sum,subs,multi,divi,a=0,b=0;
//defining addition function
float add(float a, float b)
{
	sum=a+b;
}
//defining subtraction function
float sub(float a, float b)
{
	subs=a-b;	
}
//defining multiplication function
float mul(float a, float b)
{
	multi=a*b;
}
//defining division function
float div(float a, float b)
{
	divi=a/b;
}
int main()
{
	//declaring the local variables
	float num1,num2;
	int i,n,choice;
	//using do-while nd switch to make calulation until user want and easy for calculation respectivly
	do
	{
		cout<<"Enter the number"<<endl;
		cin>>num1;
		cout<<"Enter the number"<<endl;
		cin>>num2;	
		
		cout<<"Enter the Opration which you want to preform\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"The sum of "<<num1<<" & "<<num2<<" is "<<add(num1,num2)<<endl;
				break;
			case 2:
				cout<<"The subonractin of "<<num1<<" & "<<num2<<" is "<<sub(num1,num2)<<endl;
				break;
			case 3:
				cout<<"The multplication of "<<num1<<" & "<<num2<<" is "<<mul(num1,num2)<<endl;
				break;
			case 4:
				cout<<"The division of "<<num1<<" & "<<num2<<" is "<<div(num1,num2)<<endl;
				break;
			default:
				cout<<"invalid choice"<<endl;
				break;				
		}
		cout<<"Do you want to continue?\n1 for YES\n0 for NO"<<endl;
		cin>>n;
	}
	while(n!=0);
}
