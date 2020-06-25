//atm.cpp
#include "atm.h"

using std::cout;    using std::cin;

void ATM::scan_card()
{
    cout<<"Welcome to ACC community bank\n";
    cout<<"Scan card: \n";
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
    int amount;

    switch (static_cast<OPTION>(choice))
    {
    case OPTION::DEPOSIT:
        cout<<"Enter deposit: ";
        cin>>amount;
        accounts[selected_account_index].deposit(amount);
        break;
    case OPTION::WITHDRAW:
        cout<<"Enter withdraw: ";
        cin>>amount;
        accounts[selected_account_index].withdraw(amount);
        break;
    case OPTION::DISPLAY:
        cout<<accounts[selected_account_index].get_balance()<<"\n";
        break;
    default:
        cout<<"Exiting...";
        break;
    }

}