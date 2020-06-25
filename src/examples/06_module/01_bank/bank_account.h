//bank_account.h
#include<iostream>

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance{b}{}
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}
private:
    int branch_balance;
};

#endif

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
    friend void BranchBank::update_balance(int b);
private:
    int balance;//lock this variable
    static int bank_balance;
};

#endif