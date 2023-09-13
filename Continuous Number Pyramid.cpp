#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any whole number: ";
    cin>>number;
    int n=1;
    for(int row=0;row<number;row++)
    {
        for(int column=0;column<=row;column++)
        {
            cout<<n<<" ";
            n=n+1;
        }
        cout<<endl;
    }
    return 0;
}
