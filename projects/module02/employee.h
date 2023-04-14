#ifndef MODULE02_EMPLOYEE_H
#define MODULE02_EMPLOYEE_H


class employee {
    string identity;
    string fullname;
    string iban;
    double salary;
    string department;
public:
    employee(string identity,string fullname,string iban,double salary,string department);
    string getIdentity() const;
    void increaseSalary(double rate);
};


#endif
