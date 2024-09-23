#include<iostream>
using namespace std;
int main()
{
   int x,y, swap;
   cout<<"Enter 1st number: ";
   cin>>x;
   cout<<"Enter 2nd number: ";
   cin>>y;
   cout<<"Number before swapping: "<<x<<"\t"<<y<<endl;
    swap=x;x=y;y=swap;
    cout<<"Number after swapping: "<<x<<"\t"<<y;
    return 0;
}