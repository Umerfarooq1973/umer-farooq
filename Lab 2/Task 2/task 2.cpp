#include<iostream>
#include<iostream>
using namespace std;
int main()
{
//declaring and initializing the variables
    float item1 =12.95;
	float item2 = 24.95;
	float item3 = 6.95;
	float item4 = 14.95;
	float item5 = 3.95;
	
//Displaying the price of per items
	cout<<"price of item 1:"<<"$"<<item1<<endl;
	cout<< "price of item 2:"<<"$"<<item2<<endl;
	cout<< "price of item 3:"<<"$"<<item3<<endl;
	cout<< "price of item 4:"<<"$"<<item4<<endl;
	cout<< "price of item 5:"<<"$"<<item5<<endl;
	
//Subtotal of the price of all items is given by sum of the prices of all the items
	float subTotal;
	subTotal = item1+item2+item3+item4+item5;
	cout<<"Subtotal is:"<<"$"<<subTotal<<endl;
	
//Calculating sales tax of the subtotal
	float salesTax;
	salesTax=subTotal*0.06;
	cout<<"Sales Tax is:"<<"$"<<salesTax<<endl;
	
//Calculating and Displaying Total amount
	float totalAmount;
	totalAmount=subTotal+salesTax;
	 cout<<"Total amount is:"<<"$"<<totalAmount<<endl;
	 system("pause");
}
