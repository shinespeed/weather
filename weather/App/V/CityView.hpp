#include <stdio.h>
#include <iostream>
#include "CityModel.hpp"

class CityView
{
public:
    
    CityView(CityModel& cityModel);
    
    void viewDataWeather();
    
private:
    CityModel& m_cityModel;
};
