#include <iostream>
using namespace std;
int main()
{
	//declaring inzilizating and taking input from user 
	int age;
	cout<<"Enter an Age "<<endl;
	cin >> age;
	
	
	//checking age criteria 
	(age<13) ?(cout<<"Age "<<age <<" Falls under the category:Child\n") : 
	(age>=13 && age<=19) ?(cout<<"Age "<<age <<" Falls under the category:Teenager\n") :	(cout<<"Age "<<age <<" Falls under the category:Adult\n");
	
}

