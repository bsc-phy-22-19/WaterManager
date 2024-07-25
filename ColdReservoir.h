#ifndef COLDRESERVOIR_H
#define COLDRESERVOIR_H

#include "Reservoir.h"

class ColdReservoir : public Reservoir {
    public:
        ColdReservoir();
        virtual bool drainLiquid();
};

#endif