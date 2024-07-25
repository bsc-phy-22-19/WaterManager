#include "HotReservoir.h"


HotReservoir::HotReservoir() : Reservoir(200) {
    setThresholdVolume(55);
    setThresholdTemp(30);
}

bool HotReservoir::drainLiquid() {
    return getTemperature() < getThresholdTemp() && getCurrentLevel() > getThresholdVolume();
}