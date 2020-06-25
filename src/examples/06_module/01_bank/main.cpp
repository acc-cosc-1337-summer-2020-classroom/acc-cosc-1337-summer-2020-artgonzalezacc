#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
	BankAccount& account = get_account(1);
	cout<<"Account: "<<account.get_balance()<<"\n";
	//ATM atm(account);
	//atm.run();

	BankAccount account1 = account;
	cout<<"Account1: "<<account1.get_balance()<<"\n";
	
	account.deposit(50);
	cout<<"Account: "<<account.get_balance()<<"\n";
	
	cout<<"Account1: "<<account1.get_balance()<<"\n";

	for(int i=0; i < 3;++i)
	{
		BankAccount a = get_account(i);
		cout<<a.get_balance()<<"\n";
	}

	return 0;
}