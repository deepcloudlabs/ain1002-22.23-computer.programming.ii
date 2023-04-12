#include "vehicle.h"

double Vehicle::getLoad() const {
    return this->newton2Kg(this->load);
}

double Vehicle::getMaxLoad() const {
    return this->newton2Kg(this->maxLoad);
}

bool Vehicle::addBox(double weight) {
    double weightInNewton = this->kg2Newton(weight);
    if (this->load + weightInNewton > this->maxLoad)
        return false;
    this->load += weightInNewton;
    return true;
}

double Vehicle::newton2Kg(double weight) const {
     return weight / 9.8;
}

double Vehicle::kg2Newton(double weight) const {
    return 9.8 * weight;
}