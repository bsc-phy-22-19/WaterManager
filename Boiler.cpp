#include "Boiler.h"


Boiler::Boiler() : Reservoir(85) {
    setThresholdVolume(20);
    setThresholdTemp(35);
}

bool Boiler::drainLiquid() {
    return getTemperature() >= getThresholdTemp() && getCurrentLevel() > getThresholdVolume();
}