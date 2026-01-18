#include <iostream>
using namespace std;
int main()
{

//declaring and taking unput from user
	int num;
	cout<<"Enter your numbers"<<endl;
	cin >> num;
	
//checking id the number is positive or not	
	if (num>0)
	{
		cout<<"Number you enter is positive"<<endl;
	}	
	
//checking te number is even or odd
	if(num%2==0)
	{
		cout <<"the number you entered is even"<<endl;
	}
	else
	{
		cout<<"The number you entred is odd"<<endl;
	}
	
	
//given grade on the basis of number entred	
	if(num>=90)
	{
	cout<<"Your grade is A+"<<endl;	
	}
	
	
		if(num>=80 && num<=89)
	{
	cout<<"Your grade is A"<<endl;	
	}
	
	
	
		if(num>=70 && num<=79)
	{
	cout<<"Your grade is B"<<endl;	
	}
	
	
	    if(num>=60 && num<=69)
	{
	cout<<"Your grade is C"<<endl;	
	}
	
	
	    if(num<60)
	{
	cout<<"Your grade is F"<<endl;	
	}
	system("pause");
}

