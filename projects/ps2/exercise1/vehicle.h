//
// Created by dcl on 4/11/2023.
//

#ifndef PS2_VEHICLE_H
#define PS2_VEHICLE_H

// declaration
class Vehicle {
public:
    double load;
    double maxLoad;
    Vehicle(double max_load) : maxLoad(max_load) { }
    double getLoad() const ;
    double getMaxLoad() const;
};


#endif //PS2_VEHICLE_H
