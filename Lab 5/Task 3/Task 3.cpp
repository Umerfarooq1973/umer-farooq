#include <iostream>
using namespace std;
int main()
{
//declaring variables	
	int subject1;
	int subject2;
	int subject3;
	int obtainedMarks;
	int totalMarks;
	int totalMarks1;
	int grade;
	float percentage;
	float percentage1;
	float percentage2;
	float percentage3;
	long int eligibility;
	
//intializing variables
	cout<<"Enter your total marks"<<endl;
	cin >> totalMarks;
	cout<<"Enter your marks of First Subject"<<endl;
	cin >> subject1;
	cout<<"Enter your marks of Second Subject"<<endl;
	cin >> subject2;
	cout<<"Enter your marks of Third Subject"<<endl;
	cin >> subject3;
	
//calculating marks and precentage	
	obtainedMarks=subject1+subject2+subject3;
	percentage=(obtainedMarks*100)/totalMarks;
	cout <<"Your total Obtained Marks and Percentage:\n"<<obtainedMarks<<"\n"<<percentage<<"%"<<endl;
//Displaying Grades	
	if(percentage>=90)
	{
		cout<<"\033[32mYourGrade is A\033[0m"<<endl;  //green text 
	}
	else if(percentage>=80 && percentage<=89)
	{
		cout<<"\033[034mYour Grade is B\033[0m"<<endl; // bule text 
	}
	else if(percentage>=70 &&percentage<=79)
	{
		cout<<"\033[093mYour Grade is C\033[0m"<<endl;  //brigth yellow text
	}
	else if(percentage>=60 &&percentage<=69)
	{
		cout<<"\033[033mYour Grade is D\033[0m"<<endl;  //yellow text
	}
	else
	{
		cout<<"\033[31mYou are FAIL\033[0m"<<endl;  //RED text
	}
	
	
//failure condition 
	totalMarks1=totalMarks/3;
	percentage1=(subject1*100)/totalMarks1;
	percentage2=(subject2*100)/totalMarks1;
	percentage3=(subject3*100)/totalMarks1;
	
	if(percentage1<60)
	{
		cout<<"\033[31mYou are fail\033[0m"<<endl;
	}
	else if(percentage2<60)
	{
		cout<<"\033[31myou are Fail\033[0m"<<endl;
	}
	else if(percentage3<60)
	{
		cout<<"\033[31myou are Fail\033[0m"<<endl;
	}
	else
	{
		cout<<"\033[32mYou are PASS\033[0m"<<endl;
	}
	
	
//Scloarship eligibitity
	if(percentage1>=90 && percentage2>=90 && percentage3>=90  && totalMarks>=270)
	{
		cout<<"\033[32mYou are eligible For MERIT SCHLOARSHIP\033[0m"<<endl;
	}
	else if(percentage1>=80 && percentage1<90 && percentage2>=80 && percentage2<90 && percentage3>=80 && percentage3<90  && totalMarks>=240)
	{
		cout<<"\033[34m You are eligible for REGULAR SCHOLARSHIP\033[0m"<<endl;
	}
	else
	{
		cout<<"\033[31mYou are not eligible for SCHOLARSHIP\033[0m"<<endl;
	}

//output ceriateia


//displaying the individual percentage of each subject	
			//subject 1
	if(percentage1>=90)
	{
		cout<<"\033[32mYourGrade is A in 1st subject\033[0m"<<endl;  //green text 
	}
	else if(percentage1>=80 && percentage1<=89)
	{
		cout<<"\033[034mYour Grade is B in 1st subject\033[0m"<<endl; // bule text 
	}
	else if(percentage1>=70 &&percentage1<=79)
	{
		cout<<"\033[093mYour Grade is C in 1st subject\033[0m"<<endl;  //brigth yellow text
	}
	else if(percentage1>=60 &&percentage1<=69)
	{
		cout<<"\033[033mYour Grade is D in 1st subject\033[0m"<<endl;  //yellow text
	}
	else
	{
		cout<<"\033[31mYou are FAIL in your 1st Subject\033[0m"<<endl;  //RED text
	}		//subject 2
		if(percentage2>=90)
	{
		cout<<"\033[32mYourGrade is A in 2nd subject\033[0m"<<endl;  //green text 
	}
	else if(percentage2>=80 && percentage2<=89)
	{
		cout<<"\033[034mYour Grade is B in 2nd subject\033[0m"<<endl; // bule text 
	}
	else if(percentage2>=70 &&percentage2<=79)
	{
		cout<<"\033[093mYour Grade is C in 2nd subject\033[0m"<<endl;  //brigth yellow text
	}
	else if(percentage2>=60 &&percentage2<=69)
	{
		cout<<"\033[033mYour Grade is D in 2nd subject\033[0m"<<endl;  //yellow text
	}
	else
	{
		cout<<"\033[31mYou are FAIL in your 2nd Subject\033[0m"<<endl;  //RED text
	}
		
		
			//subject 3
	if(percentage3>=90)
	{
		cout<<"\033[32mYourGrade is A in 3rd subject\033[0m"<<endl;  //green text 
	}
	else if(percentage3>=80 && percentage3<=89)
	{
		cout<<"\033[034mYour Grade is B in 3rd subject\033[0m"<<endl; // bule text 
	}
	else if(percentage3>=70 &&percentage3<=79)
	{
		cout<<"\033[093mYour Grade is C in 3rd subject\033[0m"<<endl;  //brigth yellow text
	}
	else if(percentage3>=60 &&percentage3<=69)
	{
		cout<<"\033[033mYour Grade is D in 3rd subject\033[0m"<<endl;  //yellow text
	}
	else
	{
		cout<<"\033[31mYou are FAIL in your 3rd Subject\033[0m"<<endl;  //RED text
	}
	system("pause");
	return 0;
}
