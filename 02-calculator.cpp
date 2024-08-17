#include<iostream>
using namespace std;
int main(){
    cout<<"======Calculator======\n\n";
    int num1,num2;
    char sign;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter operations: ";
    cin>>sign;
    cout<<"Enter second number: ";
    cin>>num2;
    if(sign=='+')
    {
        cout<<"Sum of "<<num1<<" and "<<num2<<"= "<<num1+num2;
    }
     else if(sign=='-')
    {
        cout<<"Subtraction of  "<<num1<<" and "<<num2<<"= "<<num1*num2;
    }
    else if(sign=='*')
    {
        cout<<"Producr of  "<<num1<<" and "<<num2<<"= "<<num1*num2;
    }
    else if(sign=='/'){
        cout<<"division of  "<<num1<<" and "<<num2<<"= "<<num1/num2;
    }
    else{
        cout<<"Yuo have made some mistake";
    }
    return 0;
}