#include "HttpRequest.hpp"


static size_t writeCallBack(char *data, size_t size, size_t nmemb, std::string *userp)
{
    userp->append(data, size * nmemb);
    return size * nmemb;
}

Request::Request(ModelNet &modelNet):
m_modelNet(modelNet){}


void Request::updateHtmlRequest()
{

    m_tempUrl = "http://api.openweathermap.org/data/2.5/forecast?q="+m_modelNet.getNameCityNet()+"&APPID=e3d3eded876ac37726d18cdce5f082b6";
    
    m_requestURL= new char[Request::m_tempUrl.length()+1];
    strcpy(m_requestURL, m_tempUrl.c_str());
  
    m_curl = curl_easy_init();
    if(m_curl) {
        
        curl_easy_setopt(m_curl, CURLOPT_URL, m_requestURL);
        curl_easy_setopt(m_curl, CURLOPT_WRITEFUNCTION,writeCallBack);
        curl_easy_setopt(m_curl, CURLOPT_WRITEDATA, &m_readHtml);
        m_res = curl_easy_perform(m_curl);

        delete [] m_requestURL;
        curl_easy_cleanup(m_curl);
    }

    m_modelNet.setReadHtmlModel(m_readHtml);
}
