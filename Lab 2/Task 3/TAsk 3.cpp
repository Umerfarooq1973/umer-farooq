#include<iostream>
#include<iomanip>
#define score1 88.5
#define score2 90.75
#define score3 88.25
using namespace std;
int main()
{
//calculating average scores 	
    double average;
	average=(score1+score2+score3)/3;
	cout<<"The average of "<<score1<<" , "<<score2<<" and "<<score3<<" = "<<fixed<<setprecision(2) <<average;
	
}

