#include <iostream>
using namespace std;
int main()
{
	//intilizing declaring and taking input from user
	int a;
	cout<< "Enter an number "<<endl;
	cin>> a;
	
	
	
	//caculating modulus and checking the condition that  number is even and odd
	int X=a%2;
	(X==0) ?(cout<<"The number "<<a<<" is even"<<endl):(cout<<"The number "<<a<<" is odd"<<endl);
	system("pause");

}
