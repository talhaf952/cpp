#include<iostream>
using namespace std;
int main()
{
    for(int i=2;i<=100;i+=2)
    {
        cout<<i<<"\t";
    }
    cout<<"\n"<<endl;
    for(int i=100;i>=1;i-=2)
    {
        cout<<i<<"\t";
    }
    return 0;
}