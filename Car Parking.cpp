#include<iostream>
using namespace std;
int main(){
	cout<<"...........Car_Parking.........";
	int enter;
	int car=0,bike=0,rikshaw=0;
	while(true)
	{
		cout<<"\nPress 1 to enter Car."<<endl;
		cout<<"Press 2 to enter Bike."<<endl;
		cout<<"Press 3 to enter Rikshaw."<<endl;
		cout<<"Press 4 to show record."<<endl;
		cout<<"Press 5 to delete record."<<endl;
		cout<<"Press 6 to exit."<<endl;
		cin>>enter;
		if(enter==1)
		{
			car++;
			system("cls");
			cout<<"Car is added."<<endl;
		}
		else if(enter==2)
		{
			bike++;
			system("cls");
			cout<<"bike is added."<<endl;
		}
		else if(enter==3)
		{
			rikshaw++;
			system("cls");
			cout<<"rikshaw is added."<<endl;
		}
		else if(enter==4)
		{
			cout<<"Record of Cars, Bikes and Rikshaws is: "<<endl;
			cout<<"Cars are : "<<car<<endl;
			cout<<"Bikes are : "<<bike<<endl;
			cout<<"Riksaws are : "<<rikshaw<<endl;
		}
		else if(enter==5)
		{
			cout<<"All record is deleted...";
			car=0;
			bike=0;
			rikshaw=0;
			cout<<"Record of Cars, Bikes and Rikshaws is: "<<endl;
			cout<<"Cars are : "<<car<<endl;
			cout<<"Bikes are : "<<bike<<endl;
			cout<<"Riksaws are : "<<rikshaw<<endl;
		}
		else if(enter==6)
		{
			exit(0);
		}
		else
		{
			cout<<"Invalid Input.";
		}
	}
}
