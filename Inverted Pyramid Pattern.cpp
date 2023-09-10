#include<iostream>
using namespace std;

int main()
{
	cout<<"Inverted Pyramid Pattern in C++."<<endl;
	cout<<"\nEnter any number: ";
	int number;
	cin>>number;
	for(int i=number;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
