cmake_minimum_required(VERSION 3.14)
project(Kulaxyz)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kulaxyz main.cpp VesselSystem.cpp VesselSystem.h Vessel.h PassengerVessel.h MilitaryVessel.h CargoVessel.h)