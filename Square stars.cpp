#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Any Number: ";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=number;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
