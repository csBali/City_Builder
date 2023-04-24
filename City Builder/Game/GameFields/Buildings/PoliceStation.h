#ifndef POLICESTATION_H
#define POLICESTATION_H

#include "Building.h"

class PoliceStation : public Building
{
public:
    PoliceStation(FieldType type, int x, int y, float cost) : Building(type, x, y, cost) {};
    ~PoliceStation() {}

    bool inline IsPoliceStation() const override { return true; }
    //azért 0, mert a közbiztonságot külön számoljuk
    float inline GetBuildingSatisfaction() const override { return 0; }
};

#endif
