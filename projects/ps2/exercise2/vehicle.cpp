#include "vehicle.h"

double Vehicle::getLoad() const {
   return this->load;
}

double Vehicle::getMaxLoad() const {
   return this->maxLoad;
}

bool Vehicle::addBox(double weight){
    if (this->load + weight > this->maxLoad)
        return false;
    this->load += weight;
    return true;
}