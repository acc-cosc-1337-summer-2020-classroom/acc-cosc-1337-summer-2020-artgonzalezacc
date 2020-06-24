//bank_account.h
#include<iostream>
#include<vector>

#ifndef BANK_ACCOUNT_H//header guards
#define BANK_ACCOUNT_H

enum transaction{ DEPOSIT=1, WITHDRAW=2, DISPLAY=3};
enum class OPTION{DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};//c++11 

class BankAccount
{

public:
    BankAccount() : BankAccount(0){}//delegating constructor
    BankAccount(int b) : balance{b} { bank_balance += balance; } //initializer list
    int get_balance() const {return balance;}//inline class function
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private:
    int balance;//lock this variable
    static int bank_balance;
};


BankAccount& get_account(int i);//free function

void display_menu();

int get_choice();

void handle_transaction(BankAccount& account, int choice);

#endif