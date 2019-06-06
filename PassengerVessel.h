#include "Vessel.h"
#include <stdexcept>

class PassengerVessel : public Vessel
{
private:
    int passengers;
    int boats;
    int capacity;
public:
    PassengerVessel(int passengers, int boats, int capacity,
                    double enginePower, int displacement, std::string name, std::string registryPort, int crewMembers) :
            Vessel::Vessel(enginePower, displacement, name, registryPort, crewMembers, "Passenger"),
            passengers(passengers), boats(boats), capacity(capacity)
    {
        //exceptions
    }

    PassengerVessel() : Vessel()
    {
        this->passengers = 0;
        this->boats = 0;
        this->capacity = 0;
    }

    bool isEnoughBoats() const
    {
        return Vessel::getCrewQuantity() + this->passengers <= this->boats * this->capacity;
    }

    void increaseBoatsNumber()
    {
        if(this->isEnoughBoats())
        {
            throw std::invalid_argument("There are already enough boats");
        }
        this->boats = (Vessel::getCrewQuantity() + this->passengers + this->capacity-1)/ this->capacity;
    }

    int getPassengers() const
    {
        return this->passengers;
    }

    int getBoats() const
    {
        return this->boats;
    }

    int getCapacity() const
    {
        return this->capacity;
    }

    void setPassengers(int passengers)
    {
        this->passengers = passengers;
    }

//    void Vessel::setBoats(int boats)
//    {
//        this->boats = boats;
//    }

    std::string info() const
    {
        return  Vessel::info() + " also having " + std::to_string(this->passengers) + " on the board and " +
        std::to_string(this->boats) + " saving boats with capacity = " + std::to_string(this->capacity);
    }

    ~PassengerVessel();
};
