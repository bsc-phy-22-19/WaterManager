#ifndef DECIDER_H
#define DECIDER_H

#include "ColdReservoir.h"
#include "Boiler.h"
#include "HotReservoir.h"

class Decider {
    private:
        int currentActivity;

        ColdReservoir coldReservoir;
        HotReservoir hotReservoir;
        Boiler boiler;

    public:
        Decider();
        bool drainHotReservoir();
        bool drainColdReservoir();
        bool drainBoiler();

        bool addToHotReservoir();
        bool addToColdReservoir();
        bool addToBoiler();

        void update(int hrTemp, int hrVol, int boiTemp, int boiVol);
        void activityChanger();

        void hrDetails();
        void crDetails();
        void boiDetails();
};

#endif