#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
	//ATM atm;
	//atm.run();

	BankAccount account;
	BranchBank bank(10000);
	bank.update_balance(500);

	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n";

	return 0;
}