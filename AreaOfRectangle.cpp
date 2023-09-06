#include<iostream>
using namespace std;
//create class
class Rectangle
{
	//Access Specifier
	public:
	//Initialize Variables
	double length;
	double width;
	//Method
	double area()
	{
		return length*width;
	}
};
int main()
{
	//Object
	Rectangle rectangle;
	rectangle.length=23.5;
	rectangle.width=23.5;
	cout<<"Area of Rectangle: "<<rectangle.	area();
	return 0;
}
