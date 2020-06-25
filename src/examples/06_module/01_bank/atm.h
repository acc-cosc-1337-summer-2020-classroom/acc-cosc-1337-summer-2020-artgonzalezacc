//atm.h
#include<vector>

#include "bank_account.h"
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(){}
    void run();
private:
    void scan_card();
    void display_menu();//helper functions..utility functions
    void set_choice();
    void handle_transaction();
    int choice;
    int selected_account_index;
    std::vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};
};

#endif
