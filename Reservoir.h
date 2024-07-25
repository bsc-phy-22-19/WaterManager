#ifndef RESERVOIR_H
#define RESERVOIR_H

class Reservoir {
  private:
    int maxVolume;
    int thresholdVolume;
    int minVolume = 0;
    int currentLevel = 0;
    int temperature = 0;
    int thresholdTemperature;

  public:
    Reservoir(int maxVolume);
    int getMaxVolume();
    void setMaxVolume(int volume);
    int getMinVolume();
    void setMinVolume(int volume);
    int getCurrentLevel();
    void setCurrentLevel(int volume);
    int getTemperature();
    void setTemperature(int temp);
    bool isOverflow();
    int getThresholdVolume();
    void setThresholdVolume(int volume);
    int getThresholdTemp();
    void setThresholdTemp(int temp);
    void setVolume(int max, int min, int threshold, int current);
    void setTemperature(int temp, int threshold);
    bool addLiquid(int amount);
    bool stopDrain();

    virtual bool drainLiquid() = 0;
};

#endif