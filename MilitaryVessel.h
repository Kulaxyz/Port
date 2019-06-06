//
// Created by kulaxyz on 20.05.19.
//

#ifndef KULAXYZ_MILITARYVESSEL_H
#define KULAXYZ_MILITARYVESSEL_H

#endif //KULAXYZ_MILITARYVESSEL_H
#include "Vessel.h"

class MilitaryVessel : public Vessel
{
private:
    std::string armorType;
public:
    MilitaryVessel(std::string armorType, double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers) :
            Vessel(enginePower, displacement, name, registryPort, crewMembers, "Military"),
            armorType(armorType)
    {
        //exceptions
    }

    MilitaryVessel() : Vessel()
    {
        this->armorType = "none";
    }

    std::string info() const
    {
        return  Vessel::info() + " with  " + this->armorType + " as an armor";
    }

    void setArmorType(std::string armorType)
    {
        this->armorType = armorType;
    }

    ~MilitaryVessel();
};
