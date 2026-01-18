#include<iostream>
using namespace std;
int main()
{
	/* declraction of the cordinates of the 2d plan*/
	int x1;
	int x2;
	int y1;
	int y2;
	/* initilizing the cordinates of the the 2d plan*/
	x1 =3;
	x2 =6;
	y1 =4;
	y2 =8;
	/* The formula will be used for square didtance is (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)*/
	int square_distance=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	cout<<"The Square Distance between the points (3,4) and (6,8) is:"<<square_distance<<endl;
	system("pause");
}

