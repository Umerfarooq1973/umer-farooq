#include<iostream>
using namespace std;
//declaring the global variables
int choice;

//defining the function for menu
int menu(int num)
{
	cout<<"Enter the Related number to oder a dish.\n1 for Black Coffee\n2 for baryani\n3 for Naan Chana\n4 for BBQ\n5 for Karai"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			choice;
	}
}

int main()
{
	int n,i,choice;
	do
	{
		menu(n);
		cout<<"Do you want to oder another dish?\n\33[32m1 for Yes.\33[0m\n\33[31m2 for No.\33[0m"<<endl;	
		cin>>n;
	}while(n!=0);
	
	
	
}
