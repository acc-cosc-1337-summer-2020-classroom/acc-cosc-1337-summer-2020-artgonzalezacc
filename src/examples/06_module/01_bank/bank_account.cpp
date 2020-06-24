//bank_account.cpp
#include "bank_account.h"
using std::vector;
using std::cout; using std::cin;

vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
        bank_balance -= amount;
    }

}

int BankAccount::bank_balance = 0;

BankAccount& get_account(int i)
{
    return accounts[i];
}

void display_menu()
{
    cout<<"1) Make Deposit\n";
    cout<<"2) Make Withdraw\n";
    cout<<"3) Display Balance\n";
    cout<<"4) Exit\n\n";
    cout<<"Enter your choice: ";    
}

int get_choice()
{
    int choice;
    cin>>choice;
    cin.ignore();

    while(choice < 1 || choice > 4)
    {
        cout<<"Valid choices are 1 to 4. Try again.";
        cin>>choice;
        cin.ignore();
    }

    return choice;    
}

void handle_transaction(BankAccount& account, int choice)
{
    int amount;

    switch (static_cast<OPTION>(choice))
    {
    case OPTION::DEPOSIT:
        cout<<"Enter deposit: ";
        cin>>amount;
        account.deposit(amount);
        break;
    case OPTION::WITHDRAW:
        cout<<"Enter withdraw: ";
        cin>>amount;
        account.withdraw(amount);
        break;
    case OPTION::DISPLAY:
        cout<<account.get_balance()<<"\n";
        break;
    default:
        cout<<"Exiting...";
        break;
    }
}