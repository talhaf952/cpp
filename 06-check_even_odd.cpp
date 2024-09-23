#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(num%2!=0)
    {
        cout<<num<<" is Odd Number.\n";
    }
    else
    {
        cout<<num<<" is Even Number.\n";
    }
    return 0;
}