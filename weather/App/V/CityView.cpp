#include "CityView.hpp"

CityView::CityView(CityModel& cityModel):m_cityModel(cityModel){}

void CityView::viewDataWeather()
{
    std::cout<<"City, country: "<<m_cityModel.getNameCity()<<std::endl;
    std::cout<<"Coord: "<<m_cityModel.getCoordLat()<<" "<<m_cityModel.getCoordLon()<<std::endl;
    for (int i = 0; i<15;i++)
    {
        std::cout<<""<<std::endl;
        std::cout<<"Time: "<<m_cityModel.getDataWeather()[i].txtTime<<std::endl;
        std::cout<<"Temp: "<<m_cityModel.getDataWeather()[i].temp<<std::endl;
        std::cout<<"Humidity: "<<m_cityModel.getDataWeather()[i].humidity<<std::endl;
        std::cout<<"Pressure: "<<m_cityModel.getDataWeather()[i].pressure<<std::endl;
        std::cout<<"Unix time: "<<m_cityModel.getDataWeather()[i].unixTime<<std::endl;
    }
}
