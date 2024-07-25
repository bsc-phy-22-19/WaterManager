#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Decider.h"

class Controller : public Decider {
    public:
        Controller();
        bool turnColdInLetGreen();
        bool turnColdInLetRed();

        bool turnColdOutletGreen();
        bool turnColdOutletRed();

        bool turnPumpOn();
        bool turnSelonoidOn();
};

#endif