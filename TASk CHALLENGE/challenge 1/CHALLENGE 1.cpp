#include <iostream>
#define GRADE_A 50000
#define GRADE_B 30000
#define GRADE_C 20000
using namespace std;
int main()
{
	int salary, employeJoiningYear, presentYear;
	int year ,bonus ,grossSalary ,tax , netSalary;
	
	cout<<"Enter your salary"<<endl;
	cin >>salary;
	
	cout<<"Enter your Apointed Year"<<endl;
	cin>> employeJoiningYear;
	
	cout<<"Enter present Year"<<endl;
	cin>>presentYear;
	
	//Working year
	year=presentYear-employeJoiningYear;
	
	

	//Grade 
		if(salary>=50000)
	{
		
		cout<<"GRADE A \n";
	}
	
	
		if(salary>=30000 && salary<50000)
	{
		cout<<"GRADE B \n";
	}
	
		if(salary>=20000 && salary<30000)
	{
		cout<<"GRADE C \n";
	}
	
	//Bonus Calculation
	if(year>=10)
	{
		bonus = salary*0.10;    //10%
		cout<<"Your bonus is:"<<bonus<<endl;
	}
	

		if(year>=5 && year<=9)
	{
		bonus = salary*0.5;    //5%
		cout<<"Your bonus is:"<<bonus<<endl;
	}
	
		if(year<5)
	{
		bonus = 0;
		cout<<"Your are not eligible for bonus"<<endl;
	}
	
             //gross salary
	grossSalary = salary + bonus;
	
	
	
		if(grossSalary>40000)
	{
		tax=grossSalary*0.20;   //20%
		cout<<"Your are Taxes are:"<<tax<<endl;
	}
	
	
	
	
		if(grossSalary>=30000 && grossSalary<=40000)
	{
		tax=grossSalary*0.10;    //10%
		cout<<"Your are Taxes are:"<<tax<<endl;
	}
	
	
	
		if(grossSalary<30000)
	{
		tax=0;
		cout<<"No Taxes are deducted"<<endl;
	}
	
	//net salary
	
	netSalary=grossSalary-tax;
	
	cout<<"Your Net Salary is:"<<netSalary<<endl;	
	
}
