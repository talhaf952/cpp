#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Table of: ";
    cin>>number;
    cout<<"======Print Table of "<<number<<" from 1 to 10======"<<endl;
    
    for(int i=1;i<=10;i++)
    {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}