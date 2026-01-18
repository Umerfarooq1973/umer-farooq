#include <iostream>
using namespace std;
int main()
{
	int n,N,choice,choice2,quantity,TotalBill;
	do
	{
		cout<<"\33[32mSelect your oder from the menu\33[0m\n1.Breakfast\n2.lunch\n3.Dinner"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"You choose Breakfast what would you like to eat from break fast menu\n1.Anda Pratha(RS:40)\n2.Nan Channy(RS:60)\n3.Siri Paye(RS:150)\n4.Tea(RS:15)"<<endl;
					cin>>choice2;
					switch(choice2)
					{
						case 1:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*40;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 2:	
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*60;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 3:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*150;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
					}
					break;		
				}
		    case 2:
				{
					cout<<"You choose Lunch What would you like to eat from lunch menu\n1.Chiken Karahi(RS:1050kg)\n2.Mutton Karahi(RS:1800kg)\n3.Egg Fried Rice(RS:450/Plate)\n4.BBQ(RS:1050/Dozen)"<<endl;
					cin>>choice2;
					switch(choice2)
					{
						case 1:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1050;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 2:	
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1800;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 3:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*450;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 4:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1050;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
				break;
					}
						
				}	
				
				
			case 3:
				{
					cout<<"You choose Dinner What would you like to eat from linch menu\n1.Chicken Karahi(RS:1050kg)\n2.Mutton Karahi(RS:1800kg)\n3.Egg Fried Rice(RS:450/Plate)\n4.BBQ(RS:1050/Dozen)\n5.Saji(RS:800kg)"<<endl;
					cin>>choice2;
					switch(choice2)
					{
							case 1:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1050;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 2:	
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1800;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 3:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*450;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 4:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*1050;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
						case 5:
							{
								cout<<"Enter the Quantity you want"<<endl;
								cin>>N;
								TotalBill=N*800;
								cout<<"Total Bill:"<<TotalBill<<endl;
								break;
							}
				break;
					}
						
				}
			default:
				cout<<"Invalid Choice"<<endl;			
		}
		cout<<"Want to make another order\n1.yes\n0.No"<<endl;
		cin>>n;
	}while(n==1);
}
