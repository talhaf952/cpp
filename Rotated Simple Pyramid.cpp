// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int number;
	cout<<"Enter any whole number: ";
	cin>>number;

	// looping rows
	
	for(int i=number;i>0;i--)
	{
		for(int j=1;j<=number;j++)
		{
			if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
		}
		cout<<endl;
	}
	return 0;
}

