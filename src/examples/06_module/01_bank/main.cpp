#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"
#include<iostream>
#include<memory>
#include<time.h>
#include<vector>

using std::cout;
using std::cin;
using std::unique_ptr;	using std::make_unique;


int main()
{
	//ATM atm;
	//atm.run();

	//steps
	//1-add virtual destructor base
	//2-add destructor to base classes

	//Create array of objects
	BankAccount* accounts[3];
	accounts[0] = new SavingsAccount(50);
	accounts[1] = new CheckingAccount(500);
	accounts[2] = new SavingsAccount(100);

	//display balance
	for(auto account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}

	//release memory
	for(int i=0; i < 3; ++i)
	{
		delete accounts[i];
		accounts[i] = nullptr;
	}

	return 0;
}