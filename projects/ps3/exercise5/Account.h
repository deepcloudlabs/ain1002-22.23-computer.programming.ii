#ifndef PS3_ACCOUNT_H
#define PS3_ACCOUNT_H

class Account {
    double balance;
public:
    Account(double balance);
    double getBalance() const ;
    bool withdraw(double amount);
    bool deposit(double amount);
};

#endif //PS3_ACCOUNT_H
