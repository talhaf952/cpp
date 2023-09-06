#include<iostream>
using namespace std;
//create class
class Bank
{
//Access Specifier
public:
//variables
string name;
double balance;
//method to deposit amount
void deposit(double money)	
{
	balance+=money;
}
//Method to withdraw amount
void withdraw(double money)
{
	if(money<=balance)
	{
		balance-=money;
	}
	else
	{
		cout<<"Not enough balance.";
	}
}
};

int main()
{
	Bank account;
	account.name="Muhammad Talha.";
	account.balance=1000000000;
	
	account.deposit(5000000000);
	account.withdraw(200000);
	
	cout<<"Account Holder: "<<account.name<<endl;
	cout<<"Accout Balance: "<<account.balance<<endl;
	return 0;
}
