//
// Created by dcl on 4/5/2023.
//
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include "employee.h"

using namespace std;

employee::employee(string identity, string fullname, string iban, double salary, string department) {
    this->identity = identity;
    this->fullname = fullname;
    this->iban = iban;
    this->salary = salary;
    this->department = department;
}

string employee::getIdentity() const {
    return this->identity;
}

void employee::increaseSalary(double rate) {
    if (rate > 0) {
        this->salary *= (1.0 + rate);
    }
}
