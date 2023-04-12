//
// Created by dcl on 4/11/2023.
//

#ifndef PS2_VEHICLE_H
#define PS2_VEHICLE_H

// declaration
class Vehicle {
private:
    double load;
    double maxLoad;
public:
    Vehicle(double max_load) : maxLoad(max_load) { }
    double getLoad() const ;
    double getMaxLoad() const;
    bool addBox(double weight);
};


#endif //PS2_VEHICLE_H
