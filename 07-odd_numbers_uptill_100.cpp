#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i+=2)
    {
        cout<<i<<"\t";
    }
    cout<<"\n"<<endl;
    for(int i=99;i>=1;i-=2)
    {
        cout<<i<<"\t";
    }
    return 0;
}