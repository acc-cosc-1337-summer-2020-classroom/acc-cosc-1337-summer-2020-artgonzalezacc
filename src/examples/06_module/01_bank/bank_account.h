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
    explicit BankAccount(int b) : balance{b} { bank_balance += balance; } //initializer list
    virtual int get_balance() const {return balance;}//inline class function
    void deposit(int amount);
    void withdraw(int amount);
    void set_option(OPTION o){option = o;};
    static int get_bank_balance(){return bank_balance;}
    friend void BranchBank::update_balance(int b);
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
    friend std::istream& operator>>(std::istream& in, BankAccount& account);
private:
    int balance;//lock this variable
    OPTION option;
    static int bank_balance;
};

#endif