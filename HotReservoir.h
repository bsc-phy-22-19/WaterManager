#ifndef HOTRESERVOIR_H
#define HOTRESERVOIR_H

#include "Reservoir.h"

class HotReservoir : public Reservoir {
    public:
        HotReservoir();
        virtual bool drainLiquid();
};

#endif