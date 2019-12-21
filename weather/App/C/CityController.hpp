#include <stdio.h>
#include "CityModel.hpp"
#include "ModelNet.hpp"
#include "HttpResponce.hpp"
#include "HttpRequest.hpp"

class CityController
{
public:
    
    CityController(CityModel& cityModel);
    void start();
    void updateData();
    
private:
    CityModel& m_cityModel;
    ModelNet m_modelNet;
    nlohmann::json m_dataJson;
    DataWeather tempDataWeather;
};
