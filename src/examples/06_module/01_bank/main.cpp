#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
	CheckingAccount c(1000);
	cout<<c;
	CheckingAccount c1;
	cout<<c1;

	SavingsAccount s(100);
	cout<<s;
	cout<<s.get_balance()<<"\n";//derived class 
	SavingsAccount s1;
	cout<<s1;//base class balance
	

	//ATM atm;
	//atm.run();

	
	/*BankAccount account;
	BranchBank bank(10000);
	bank.update_balance(500);
	cout<<account;
	cout<<account.get_balance();

	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n";*/

	return 0;
}