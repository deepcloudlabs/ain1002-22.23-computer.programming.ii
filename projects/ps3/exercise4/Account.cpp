#include "Account.h"

Account::Account(double balance) {
    this->balance = balance;
}

double Account::getBalance() const {
    return this->balance;
}

// business method
bool Account::withdraw(double amount) {
    // validation
    if (amount <= 0.0) return false;
    // business rule
    if (amount > this->balance) return false;
    // business logic
    this->balance -= amount;
    return true;
}

// business method
bool Account::deposit(double amount) {
    // validation
    if (amount <= 0.0) return false;
    // policy -> regulations
    if (amount > 100'000'000) return false;
    // business logic
    this->balance += amount;
    return true;
}