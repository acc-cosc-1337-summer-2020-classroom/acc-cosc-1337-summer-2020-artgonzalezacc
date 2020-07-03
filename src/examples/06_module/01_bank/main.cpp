#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"
#include<iostream>
#include<memory>
#include<time.h>

using std::cout;
using std::cin;
using std::unique_ptr;	using std::make_unique;

int main()
{
	srand(time(NULL));//force true random number generation

	BankAccount* account = new CheckingAccount(500);
	cout<<account->get_balance();
	delete account;
	account = nullptr;

	/*unique_ptr<BankAccount> a = make_unique<SavingsAccount>(600);//heap
	cout<<a->get_balance()<<"\n";
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	cout<<c->get_balance()<<"\n";
	std::vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(a));
	accounts.push_back(std::move(c));

	for(auto& account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}*/

	/*CheckingAccount c(1000);
	cout<<c;
	CheckingAccount c1;
	cout<<c1;

	SavingsAccount s(100);
	cout<<s;
	cout<<s.get_balance()<<"\n";//derived class 
	SavingsAccount s1;
	cout<<s1;//base class balance*/
	

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