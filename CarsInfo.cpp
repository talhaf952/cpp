#include<iostream>
using namespace std;
//create class
class Car
{
//Access Specifier
public:
//Initialize Variables
string make,model;
int year;
//Method
void DisplayInfo()
{
	cout<<"Make: "<<make<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"Year: "<<year<<endl;
}
	
};

int main()
{
	//Object
	Car detail;
	detail.make="Honda";
	detail.model="Brand New";
	detail.year=10;
	detail.DisplayInfo(); 
	
	Car detail2;
	detail2.make="Toyota";
	detail2.model="Camry";
	detail2.year=12;
	detail2.DisplayInfo();
	return 0;
}
