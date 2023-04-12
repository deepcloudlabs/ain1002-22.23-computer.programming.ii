//
// Created by dcl on 4/11/2023.
//

#ifndef PS2_VEHICLE_H
#define PS2_VEHICLE_H

// declaration
class Vehicle {
private:
    double load; // newton
    double maxLoad; // newton
public:
    Vehicle(double max_load) {
        this->maxLoad = this->kg2Newton(max_load);
    }
    double getLoad() const ; // kg
    double getMaxLoad() const; // kg
    bool addBox(double weight /* kg */);
private:
    double newton2Kg(double weight) const ;
    double kg2Newton(double weight) const ;
};


#endif //PS2_VEHICLE_H
