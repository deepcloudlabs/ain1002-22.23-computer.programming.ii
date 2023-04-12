#include "Customer.h"

string Customer::getFirstName() const {
    return this->firstName;
}

string Customer::getLastName() const {
    return this->lastName;
}

Account *Customer::getAccount() const {
    return this->account;
}

void Customer::setAccount(Account *account) {
    if (account == nullptr) return;
    this->account = account;
}