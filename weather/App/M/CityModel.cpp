#include "CityModel.hpp"

std::vector<DataWeather> CityModel::getDataWeather() { return m_dataWeather; }

void CityModel::setDataWeather(DataWeather dataWeather) { m_dataWeather.push_back(dataWeather); }

void CityModel::setCoordLat(double coordLat) { m_coordLat = coordLat;}

void CityModel::setCoordLon(double coordLon) { m_coordLon = coordLon;}

double CityModel::getCoordLat() { return m_coordLat; }

double CityModel::getCoordLon() { return m_coordLon; }

void CityModel::setNameCity(std::string nameCity){ m_nameCity = nameCity; }

std::string CityModel::getNameCity(){return m_nameCity;}
