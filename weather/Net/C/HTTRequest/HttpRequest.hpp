#include <stdio.h>
#include <iostream>
#include <string>
#include <curl/curl.h>
#include </Users/artyr/Desktop/json-develop/single_include/nlohmann/json.hpp>
#include "ModelNet.hpp"


class Request
{
public:
    Request(ModelNet &modelNet);
    
    void updateHtmlRequest();
    
protected:
    
    CURL *m_curl;
    CURLcode m_res;
    
    char* m_requestURL;
    
    std::string m_readHtml;
    std::string m_tempUrl;
    
    ModelNet& m_modelNet;
};
