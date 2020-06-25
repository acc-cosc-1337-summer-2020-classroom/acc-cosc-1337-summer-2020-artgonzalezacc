//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(BankAccount& a) : account{a}{}
    void run();
private:
    void display_menu();//helper functions..utility functions
    void set_choice();
    void handle_transaction();
    BankAccount& account;//our user-defined class--composition
    int choice;

};

#endif
