//atm.h
#include<iostream>
#include<memory>
#include<vector>

#include "bank_account.h"
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM();
    void run();
private:
    void scan_card();
    void display_menu();//helper functions..utility functions
    void set_choice();
    void handle_transaction();
    int choice;
    int selected_account_index;
    int selected_customer_index;
    std::vector<Customer> customers;
    
};

#endif

void display_account(std::unique_ptr<BankAccount>& account);
void display_account_val(std::unique_ptr<BankAccount> account);
std::unique_ptr<BankAccount> get_account();