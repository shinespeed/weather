#pragma once

#include <stdio.h>
#include <string>
#include </Users/artyr/Desktop/json-develop/single_include/nlohmann/json.hpp>

struct DataWeather
{
    int unixTime;
    double temp;
    double pressure;
    double humidity;
    std::string txtTime;
};

class CityModel
{
public:
    
    void setDataWeather(DataWeather dataWeather);
    void setCoordLat(double coordLat);
    void setCoordLon(double coordLon);
    void setNameCity(std::string nameCity);
    
    std::vector<DataWeather> getDataWeather();
    double getCoordLat();
    double getCoordLon();
    std::string getNameCity();
    
private:
    std::string m_nameCity = "Odessa, ua";
    std::vector<DataWeather> m_dataWeather;
    double m_coordLat;
    double m_coordLon;
};
