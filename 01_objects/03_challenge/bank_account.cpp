#include <iostream>
#include "bank_account.h"


BankAccount::BankAccount(double balance) : balance(balance) {
    if (balance <= 0.0) {
        std::cerr << "Insufficient balance!" << std::endl;
    }
}

void BankAccount::deposit(double deposit) {
    this->balance = this->balance + deposit;
    std::cout << this->balance << std::endl;
}

void BankAccount::withdraw(double withdraw) {
    if( (this->balance - withdraw) < 0.0) {
        std::cout << "Insufficient balance!" << std::endl;
    } else {
        this->balance = this->balance - withdraw;
        std::cout << this->balance << std::endl;
    }
}

double BankAccount::get_balance() const { return this->balance; }
