#include "CityController.hpp"

CityController::CityController(CityModel& cityModel):
                               m_cityModel(cityModel),
                               m_modelNet(cityModel.getNameCity()){}

void CityController::updateData()
{
    Request request(m_modelNet);
    request.updateHtmlRequest();
    Responce responce(m_modelNet);
    responce.updateDataJson();
    m_dataJson = m_modelNet.getJson();
 
    if (m_dataJson["city"]["name"].size() != 0) //проверка, есть ли вообще такой город
    {
        for (int i = 0; i < 15; i++)
        {
            tempDataWeather.temp = m_dataJson["list"][i]["main"]["temp"].get<double>()-273.2;
            tempDataWeather.unixTime = m_dataJson["list"][i]["dt"];
            tempDataWeather.pressure = m_dataJson["list"][i]["main"]["pressure"];
            tempDataWeather.humidity = m_dataJson["list"][i]["main"]["humidity"];
            tempDataWeather.txtTime = m_dataJson["list"][i]["dt_txt"];
            
            m_cityModel.setDataWeather(tempDataWeather);
        }
        
        m_cityModel.setCoordLat(m_dataJson["city"]["coord"]["lat"]);
        m_cityModel.setCoordLon(m_dataJson["city"]["coord"]["lon"]);
    } else std::cout<<"Unknown"<<std::endl;
}
