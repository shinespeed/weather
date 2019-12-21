#include "HttpResponce.hpp"

Responce::Responce(ModelNet &modelNet):
m_modelNet(modelNet){};

void Responce::updateDataJson()
{

    m_readHtml = m_modelNet.getReadHtmlModel();
    m_dataServer = nlohmann::json::parse(m_readHtml);//здесь преобразуем строку в формат json
    m_modelNet.setJson(m_dataServer);

}
