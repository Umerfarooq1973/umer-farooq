#include <iostream>
using namespace std;
int main()
{

//Declaring and inputting the account balance from user		
	int accountBalance;
	cout <<"Enter your Account Balance"<<endl;
	cin >> accountBalance;



//assigning the value of account Balance to X to make condition wrriting easier			   
	int X=accountBalance;



//conditions if X<=100 the account is Low balance account otherwise not
			
	(X<100) ? (cout<<"The account is considered a Low Balance Account"<<endl) :


//X is greater then 200 and less than 500 the account is standard account
				 
	((X>=100)&&(X<500)) ? (cout<<"The account is considered a Standard Account"<<endl) :


//X is greater 500 the account is Premnium account

	(cout<<"The account is considered a Premnium Account"<<endl);


// cheking the loyalty of user
	
	bool loyal;
	cout<<"Enter your loyal Status"<<endl;
	cin >> loyal; 
	
	
//checking the eligibility of special offer
	        	
	int SpecialOffer;
	(SpecialOffer=(X>=200 && loyal==1)) ? (cout<<"Your account is Eligible for Special Offer "<<endl) : (cout<<"Your account is not Eligible for Special Offer"<<endl);
	system("pause");
	
}

