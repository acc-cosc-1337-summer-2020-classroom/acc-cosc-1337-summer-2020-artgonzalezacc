//atm.cpp
#include "atm.h"

using std::cout;    using std::cin;

void ATM::scan_card()
{
    cout<<"Welcome to ACC community bank\n";
    cout<<"Select Account: \n";
    cout<<"1-Checking \n";
    cout<<"2-Savings\n";
    cin>>selected_account_index;
}

void ATM::run()
{
    do
    {
        scan_card();

        do
        {
            display_menu();
            set_choice();

            handle_transaction();
        } while (choice != 4);
    } while (true);

}

void ATM::display_menu()
{
    cout<<"1) Make Deposit\n";
    cout<<"2) Make Withdraw\n";
    cout<<"3) Display Balance\n";
    cout<<"4) Exit\n\n";
    cout<<"Enter your choice: ";  
}

void ATM::set_choice()
{
    cin>>choice;
    cin.ignore();

    while(choice < 1 || choice > 4)
    {
        cout<<"Valid choices are 1 to 4. Try again.";
        cin>>choice;
        cin.ignore();
    }
}

void ATM::handle_transaction()
{
    BankAccount account =accounts[selected_account_index-1];
    account.set_option(static_cast<OPTION>(choice));

    switch (static_cast<OPTION>(choice))
    {
    case OPTION::DEPOSIT:
        cin>>account;
        break;
    case OPTION::WITHDRAW:
        cin>>account;
        break;
    case OPTION::DISPLAY:
        cout<<account;
        break;
    default:
        cout<<"Exiting...";
        break;
    }

}

void display_account(std::unique_ptr<BankAccount>& account)
{
    std::cout<<*account<<"\n";
}

void display_account_val(std::unique_ptr<BankAccount> account)
{
    std::cout<<*account<<"\n";
}

std::unique_ptr<BankAccount> get_account()
{
    std::unique_ptr<BankAccount> a = std::make_unique<BankAccount>(1000);

    return a;
}

void use_account()
{
    std::unique_ptr<BankAccount> a = std::make_unique<BankAccount>(1000);
    cout<<*a;
}