#include "Decider.h"

Decider::Decider() {
    currentActivity = -1;
}

bool Decider::drainHotReservoir() {
    return currentActivity==0;
}

bool Decider::drainColdReservoir() {
    return currentActivity==1 || drainHotReservoir();
}

bool Decider::drainBoiler() {
    return currentActivity==2;
}

bool Decider::addToHotReservoir() {
    return currentActivity == 2;
}

bool Decider::addToColdReservoir() {
    return currentActivity == 0;
}

bool Decider::addToBoiler() {
    return currentActivity == 1;
}

void Decider::activityChanger() {
    if (currentActivity == 0 && hotReservoir.stopDrain()) currentActivity = -1;
    else if (currentActivity == 1 && coldReservoir.stopDrain()) currentActivity = -1;
    else if (currentActivity == 2 && boiler.stopDrain()) currentActivity = -1;

    if (currentActivity == -1) { 
        if (hotReservoir.drainLiquid() && coldReservoir.addLiquid(0)) currentActivity = 0;
        else if (boiler.stopDrain() && !boiler.drainLiquid()) currentActivity = 1;
        else if (boiler.drainLiquid() && !hotReservoir.drainLiquid()) currentActivity = 2;
    }
}

void Decider::update(int hrTemp, int hrVol, int boiTemp, int boiVol) {
    hotReservoir.setTemperature(hrTemp);
    hotReservoir.setCurrentLevel(hrVol);
    boiler.setTemperature(boiTemp);
    boiler.setCurrentLevel(boiVol);

    activityChanger();
}

