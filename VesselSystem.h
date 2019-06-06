//
// Created by kulaxyz on 20.05.19.
//

#ifndef KULAXYZ_VESSELSYSTEM_H
#define KULAXYZ_VESSELSYSTEM_H

#endif //KULAXYZ_VESSELSYSTEM_H
#include <vector>
#include <string>
#include "Vessel.h"
#include "MilitaryVessel.h"
#include "PassengerVessel.h"
#include "CargoVessel.h"
#pragma once

class VesselSystem
{
private:
    std::vector <Vessel*> vessels;
public:
    VesselSystem(){};
    void menu();
    void addCargoVessel(double CarryingCapacity, double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers);
    void addPassengerVessel(int passengers, int boats, int capacity,
                            double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers);
    void addMilitaryVessel(std::string armorType, double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers);
    void del(int number);
    void printAll() const;
    void printDetails() const;
    void modificate();
    ~VesselSystem();
};
