//
// Created by kulaxyz on 20.05.19.
//
#include "VesselSystem.h"
#include <stdexcept>
#include <string>
#include <iostream>

void VesselSystem::addCargoVessel(double CarryingCapacity, double enginePower, int displacement,
                                  std::string name, std::string registryPort, int crewMembers)
{
    vessels.push_back(new CargoVessel(CarryingCapacity, enginePower, displacement, name, registryPort, crewMembers));
}

void VesselSystem::addMilitaryVessel(std::string armorType, double enginePower, int displacement,
                                     std::string name, std::string registryPort, int crewMembers)
{
    vessels.push_back(new MilitaryVessel(armorType, enginePower, displacement, name, registryPort, crewMembers));
}

void VesselSystem::addPassengerVessel(int passengers, int boats, int capacity,
                                      double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers)
{
    vessels.push_back(new PassengerVessel(passengers, boats, capacity, enginePower, displacement, name, registryPort, crewMembers));
}

void VesselSystem::printAll() const
{
    if(vessels.empty())
    {
        std::cout << "You have no vessels yet" << std::endl;
    }
    else
    {
        for(int i = 0; i < vessels.size(); i++)
        {
            std::cout << i+1 << ' ' + vessels[i]->getName() << std::endl;
        }
    }
}

void VesselSystem::printDetails() const
{
    if(vessels.empty())
    {
        throw std::invalid_argument("You have no vessels yes.");
    }
    else
    {
        for(int i = 0; i < vessels.size(); i++)
        {
            std::cout << i+1 << ' ' + vessels[i]->info() << std::endl;
        }
    }
}

void VesselSystem::del(int number)
{
    if (number>=vessels.size() || number < 0) throw std::invalid_argument("There is no ship with such number");
    delete vessels[number];
    vessels.erase(vessels.begin()+number);
}

void VesselSystem::modificate()
{
    if(vessels.empty())
    {
        throw std::invalid_argument("You have no vessels yet.");
    }
    std::cout << "Choose which vessel you`d like to modificate: " << std::endl;
    printDetails();
    int c;
    std::cin >> c;
    if (c<1 || c > vessels.size())
    {
        throw std::invalid_argument("There is no such ship");
    }
    else
    {
        std::cout << "Which parameter of Vessel you want to modificate?" << std::endl << "1. Name" << std::endl
                  << "2. Registry port" << std::endl << "3. Quantity of crew members" << std::endl;

        if (vessels[c-1]->getType() == "Military")
        {
            std::cout << "4. Armor type" << std::endl;
        }
        else if (vessels[c-1]->getType() == "Cargo")
        {
            std::cout << "5. Carrying Capacity" << std::endl;
        }
        else
        {
            std::cout << "6. Number of Passengers" << std::endl << "7. Number of saving boats" << std::endl;
        }
        char ch;
        std::cin >> ch;
        switch (ch) {
            case '1':
            {
                std::cout << "Enter new name:" << std::endl;
                std::string newName;
                std::cin >> newName;
                vessels[c - 1]->setName(newName);
                break;
            }
            case '2':
            {
                std::cout << "Enter new port" << std::endl;
                std::string newPort;
                std::cin >> newPort;
                vessels[c - 1]->setRegistryPort(newPort);
                break;
            }
            case '3':
            {
                int newNumber;
                std::cin >> newNumber;
                vessels[c - 1]->setCrewMembers(newNumber);
                break;
            }
            case '4':
            {
                if (vessels[c-1]->getType() != "Military")
                {
                    throw std::invalid_argument("You have entered wrong number!");
                }
                std::cout << "Enter new Armor Type" << std::endl;
                std::string newArmor;
                std::cin >> newArmor;
                vessels[c - 1]->setArmorType(newArmor);
                break;
            }

            case '5':
            {
                if (vessels[c-1]->getType() != "Cargo")
                {
                    throw std::invalid_argument("You have entered wrong number!");
                }
                std::cout << "Enter new Carrying Capacity" << std::endl;
                double newCarryingCapacity;
                std::cin >> newCarryingCapacity;
                vessels[c - 1]->setCarryingCapacity(newCarryingCapacity);
                break;
            }
            case '6':
            {
                if (vessels[c-1]->getType() != "Passenger")
                {
                    throw std::invalid_argument("You have entered wrong number!");
                }
                std::cout << "Enter new number of passengers" << std::endl;
                int newPassengersNumber;
                std::cin >> newPassengersNumber;
                vessels[c - 1]->setPassengers(newPassengersNumber);
                break;
            }
            case '7':
            {
                if (vessels[c-1]->getType() != "Passenger")
                {
                    throw std::invalid_argument("You have entered wrong number!");
                }
                std::cout << "Enter new number of saving boats" << std::endl;
                int newBoatsNumber;
                std::cin >> newBoatsNumber;
                vessels[c - 1]->setBoats(newBoatsNumber);
                break;
            }
            default:
            {
                throw std::invalid_argument("You entered wrong number");
            }
        }
    }

}

VesselSystem::~VesselSystem(){}

void VesselSystem::menu()
{
    std::string armorType;
    double carryingCapacity;
    int passengers;
    int boats;
    int capacity;
    double enginePower;
    int displacement;
    std::string name;
    std::string registryPort;
    int crewMembers;
    int number;
    char character = ' ';

    while (character!='0')
    {
        std::cout <<"Menu:" <<std::endl;
        std::cout <<"1. Create Cargo vessel" <<std::endl;
        std::cout <<"2. Create Passanger vessel" <<std::endl;
        std::cout <<"3. Create Military vessel" <<std::endl;
        std::cout <<"4. delete" <<std::endl;
        std::cout <<"5. Show list of Vessels" <<std::endl;
        std::cout <<"6. Show  Vessels` details" <<std::endl;
        std::cout <<"7. Modificate"<<std::endl;
        std::cout <<"0. Exit" <<std::endl;
        std::cin >>character;

        try
        {
            switch (character)
            {

                case '1':
                    std::cout << "Enter vessel`s carrying capasity, engine power, displaysment, name, regystry port and number of crew members" << std::endl;
                    std::cin >> carryingCapacity;
                    std::cin >> enginePower;
                    std::cin >> displacement;
                    std::cin >> name;
                    std::cin >> registryPort;
                    std::cin >> crewMembers;
                    addCargoVessel(carryingCapacity, enginePower, displacement, name, registryPort, crewMembers);
                    std::cout << "You successfully created Cargo vessel " + name << std::endl;
                    break;
                case '2':
                    std::cout << "Enter number of passengers, nubmer of boats and capacity of boats, vessel`s engine power, displaysment, name, regystry port and number of crew members" << std::endl;
                    std::cin >> passengers;
                    std::cin >> boats;
                    std::cin >> capacity;
                    std::cin >> enginePower;
                    std::cin >> displacement;
                    std::cin >> name;
                    std::cin >> registryPort;
                    std::cin >> crewMembers;
                    addPassengerVessel(passengers, boats, capacity, enginePower, displacement, name, registryPort, crewMembers);
                    std::cout << "You successfully created Passenger vessel " + name << std::endl;
                    break;
                case '3':
                    std::cout << "Enter vessel`s armor type, engine power, displaysment, name, regystry port and number of crew members" << std::endl;
                    std::cin >> armorType;
                    std::cin >> enginePower;
                    std::cin >> displacement;
                    std::cin >> name;
                    std::cin >> registryPort;
                    std::cin >> crewMembers;
                    addMilitaryVessel(armorType, enginePower, displacement, name, registryPort, crewMembers);
                    std::cout << "You successfully created Military vessel " + name << std::endl;
                    break;
                case '4':
                    std::cout << "Choose which one you`d like to delete (type number of vessel) " << std::endl;
                    printAll();
                    std::cin >> number;
                    number--;
                    del(number);
                    std::cout << "You successfully deleted vessel number " + std::to_string(number+1) << std::endl;
                    break;
                case '5':
                    printAll();
                    break;
                case '6':
                    printDetails();
                    break;
                case '7':
                    modificate();
                    break;
                default:
                    throw std::invalid_argument("You entered wrong number");
            }
        }
        catch (const std::exception & e)
        {
            std::cout <<"Oops... Error!!! " << e.what()<<std::endl;
        }
    }
}