#include <string>
#include <curl/curl.h>
#include </Users/artyr/Desktop/json-develop/single_include/nlohmann/json.hpp>
#include "ModelNet.hpp"
#include <iostream>


class Responce
{
public:
    Responce(ModelNet &modelNet);
    
    void updateDataJson();
    
private:
    std::string m_readHtml;
    nlohmann::json m_dataServer;
    ModelNet& m_modelNet;
};

