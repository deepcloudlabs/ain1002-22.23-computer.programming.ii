#ifndef EXERCISE4_CUSTOMER_H
#define EXERCISE4_CUSTOMER_H
#include <string>
#include "Account.h"

using namespace std;

class Customer {
    string firstName;
    string lastName;
    Account *account; // has-a relation: i) composition ii) aggregation
public:
    Customer(string firstName,string lastName): firstName(firstName), lastName(lastName){
        account = nullptr;
    }
    string getFirstName() const;
    string getLastName() const;
    Account* getAccount() const;
    void setAccount(Account *account);
};


#endif //EXERCISE4_CUSTOMER_H
