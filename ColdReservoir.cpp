#include "ColdReservoir.h"


ColdReservoir::ColdReservoir() : Reservoir(200) {
    setThresholdVolume(10);
}

bool ColdReservoir::drainLiquid() {
    return true;
}