#include <iostream>
using namespace std;
int main ()
{
//declaring and taking input from user
	int num1;
	int num2;
	char operation;
	cout<<"Enter two numbers"<<endl;
	cin >> num1;
	cin >> num2;
	
//taking an operator from user	
	cout<<"Enter an operator"<<endl;
	cin >> operation;
	
//creating a simple calculator
	switch (operation)
	{
	case '+':
		cout<<num1+num2<<endl;
		break;
	case '-':
		cout<<num1-num2<<endl;
		break;	
	case '*':
		cout <<num1*num2<<endl;
		break;
	case '/':
		cout<<num1/num2<<endl;
		break;
	default	:
		cout<<"invalid operator"<<endl;
	}
}
