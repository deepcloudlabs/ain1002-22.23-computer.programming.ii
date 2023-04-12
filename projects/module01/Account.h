//
// Created by dcl on 10/3/2022.
//

#ifndef MODULE01_ACCOUNT_H
#define MODULE01_ACCOUNT_H

namespace banking {

    class Account {
    private:
        double balance;
    public:
        bool withdraw(const double amount); // declaration
    };

} // banking

#endif //MODULE01_ACCOUNT_H
