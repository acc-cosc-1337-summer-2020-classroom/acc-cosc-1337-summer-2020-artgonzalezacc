//temperature_data.h
#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H
#include"temperature.h"
#include<fstream>
#include<string>
#include<vector>

class TemperatureData
{
public:
    void save_temps(std::vector<Temperature>& ts);//saves list of temps to file
    std::vector<Temperature> get_temps()const;//read the list from files creates temp and adds to a vector
private:
    const std::string file_name{"temperature.dat"};
};

#endif