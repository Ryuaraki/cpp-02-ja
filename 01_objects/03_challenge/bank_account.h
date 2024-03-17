#pragma once


class BankAccount {
public:
    BankAccount(double balance);
    void deposit(double deposit);
    void withdraw(double withdraw); 
    double get_balance() const;

private:
    double balance;
};