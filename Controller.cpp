#include "Controller.h"

Controller::Controller() {

}

bool Controller::turnColdInLetGreen() {
    return !drainHotReservoir() && drainColdReservoir();
}

bool Controller::turnColdInLetRed() {
    return !turnColdInLetGreen();
}

bool Controller::turnColdOutletGreen() {
    return drainColdReservoir();
}

bool Controller::turnColdOutletRed() {
    return !turnColdOutletGreen();
}

bool Controller::turnPumpOn() {
    return drainBoiler();
}

bool Controller::turnSelonoidOn() {
    return drainHotReservoir();
}
