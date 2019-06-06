//
// Created by kulaxyz on 20.05.19.
//

#ifndef KULAXYZ_VESSEL_H
#define KULAXYZ_VESSEL_H

#endif //KULAXYZ_VESSEL_H
#include <string>
#pragma once

class Vessel
{
private:
    double enginePower;
    int displacement;
    std::string name;
    std::string registryPort;
    int crewMembers;
    std::string type;


public:
    Vessel(double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers, std::string type) :
            enginePower(enginePower), displacement(displacement), name(name), registryPort(registryPort), crewMembers(crewMembers), type(type)
    {
        //exceptions
    }

    Vessel()
    {
        this->enginePower = 1;
        this->displacement = 1;
        this->name = "none";
        this->registryPort = "none";
        this->crewMembers = 1;
    }

    int getCrewQuantity() const
    {
        return this->crewMembers;
    }

    std::string getName() const
    {
        return this->name;
    }

    double getEnginePower() const
    {
        return this->enginePower;
    }

    int getDisplacement() const
    {
        return this->displacement;
    }

    std::string getPort() const
    {
        return this->registryPort;
    }

    std::string getType() const
    {
        return this->type;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    void setRegistryPort(std::string port)
    {
        this->registryPort = port;
    }

    void setCrewMembers(int crewMembers)
    {
        this->crewMembers = crewMembers;
    }

    virtual void setArmorType(std::string armorType){};
    virtual void setCarryingCapacity(double carryingCapacity){};
    virtual void setPassengers(int passengers){};
    virtual void setBoats(int boats){};

    virtual std::string info() const
    {
        return this->type + " Vessel " + this->name + " whith engine power = " + std::to_string(this->enginePower) +
        " displaycement = " + std::to_string(this->displacement) + ", and " + std::to_string(this->crewMembers) +
        " crew members on board, is going to " + this->registryPort;
    }
};
