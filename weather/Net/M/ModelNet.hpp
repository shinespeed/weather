#pragma once

#include <stdio.h>
#include <string>
#include </Users/artyr/Desktop/json-develop/single_include/nlohmann/json.hpp>
#include <vector>

class ModelNet
{
public:
    
    ModelNet(const std::string &nameCity);
    
    void setReadHtmlModel(std::string readHtmlModel);
    void setJson(nlohmann::json json);
    
    std::string getReadHtmlModel();
    std::string getNameCityNet();
    nlohmann::json getJson();

private:
    
    std::string m_nameCityNet = "Odessa, ua";
    std::string m_readHtmlModel;
    
    nlohmann::json m_json;
};

