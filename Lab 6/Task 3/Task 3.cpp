#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
//declaring the variables
	float areaOfTriangle;
	float areaOfCircle;
	float areaOfRectangle;
	int shapeSelection;
	int base;
	int height;
	int length;
	int width;
	int radius;
//taking input from user for shape selection
	cout << "Enter the number on the bases of shape to calculate its area\n1 for circle \n2 for Rectangle \n3 for Triangle "<< endl;
	cin >>shapeSelection;
//calculatin the area of th shape chosen by the user	
	switch(shapeSelection)
	{
		case 1:
			cout<<"The formula of are of circle is Area of Circle=PI*radius*radius"<<endl;
			cout<<"Enter the value of radius"<<endl;
			cin>>radius;
			areaOfCircle=PI*radius*radius;
			cout<<areaOfCircle;
			break;
			
		case 2:
			cout<<"The formula of Area of Rectangle is Area of Rectangle=length x width"<<endl;
			cout<<"Enter the value of length"<<endl;
			cin>>length;
			cout <<"enter the value of width"<<endl;
			cin>>width;
			areaOfRectangle=length*width;
			cout<<areaOfRectangle<<endl;
			break;
		case 3:
			cout<<"The formula of area of triangle is Area of triangle=1/2(base*height)"<<endl;
			cout<<"Enter the value of base"<<endl;
			cin>>base;
			cout<<"enter the value of height"<<endl;
			cin>>height;
			areaOfTriangle=1.0/2*base*height;
			cout<<areaOfTriangle<<endl;
			break;
			
	}
	return 0;
}
