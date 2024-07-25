#ifndef BOILER_H
#define BOILER_H

#include "Reservoir.h"

class Boiler : public Reservoir {
    public:
        Boiler();
        virtual bool drainLiquid();
};

#endif