#include "Reservoir.h"

Reservoir::Reservoir(int maxVolume) : maxVolume(maxVolume) {

}

int Reservoir::getMaxVolume() {
    return maxVolume;
}

void Reservoir::setMaxVolume(int volume) {
    if(volume > 0) {
        maxVolume = volume;
    }
}

int Reservoir::getMinVolume() {
    return minVolume;
}

void Reservoir::setMinVolume(int volume) {
    if(volume > 0 && volume <= maxVolume) {
        minVolume = volume;
    }
}

int Reservoir::getCurrentLevel() {
    return currentLevel;
}

void Reservoir::setCurrentLevel(int volume) {
    if(volume >= 0) {
        currentLevel = volume;
    }
}

int Reservoir::getTemperature() {
    return temperature;
}

void Reservoir::setTemperature(int temp) {
    temperature = temp;
}

bool Reservoir::isOverflow() {
    return currentLevel >= maxVolume;
}

bool Reservoir::stopDrain() {
    return currentLevel <= thresholdVolume;
}

int Reservoir::getThresholdVolume() {
    return thresholdVolume;
}

void Reservoir::setThresholdVolume(int volume) {
    if(volume >= minVolume && volume <= maxVolume) {
        thresholdVolume = volume;
    }
}   

int Reservoir::getThresholdTemp() {
    return thresholdTemperature;    
}

void Reservoir::setThresholdTemp(int temp) {
    thresholdTemperature = temp;
}

void Reservoir::setVolume(int max, int min, int threshold, int current) {
    setMaxVolume(max);
    setMinVolume(min);
    setThresholdVolume(threshold);
    setCurrentLevel(current);
}

void Reservoir::setTemperature(int temp, int threshold) {
    setTemperature(temp);
    setThresholdTemp(threshold);
}

bool Reservoir::addLiquid(int amount) {
    return getCurrentLevel()+amount <= getThresholdVolume();
}

