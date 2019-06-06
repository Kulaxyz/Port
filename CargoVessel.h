//
// Created by kulaxyz on 20.05.19.
//

#ifndef KULAXYZ_CARGOVESSEL_H
#define KULAXYZ_CARGOVESSEL_H

#endif //KULAXYZ_CARGOVESSEL_H
#include "Vessel.h"

class CargoVessel : public Vessel
{
private:
    double carryingCapacity;
public:
    CargoVessel(double carryingCapacity, double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers) :
            Vessel::Vessel(enginePower, displacement, name, registryPort, crewMembers, "Cargo"),
            carryingCapacity(carryingCapacity)
    {
        //exceptions
    }

    CargoVessel() : Vessel()
    {
        this->carryingCapacity = 0;
    }

    std::string info() const
    {
        return  Vessel::info() + " having carrying capacity = " + std::to_string(this->carryingCapacity);
    }

    void setCarryingCapacity(double carryingCapacity)
    {
        this->carryingCapacity = carryingCapacity;
    }

    ~CargoVessel();
};
