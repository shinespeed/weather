#include "ModelNet.hpp"

ModelNet::ModelNet(const std::string &nameCity):
                     m_nameCityNet(nameCity){};

std::string ModelNet::getNameCityNet() {return m_nameCityNet;}

void ModelNet::setReadHtmlModel(std::string readHtmlModel) { m_readHtmlModel = readHtmlModel; }

std::string ModelNet::getReadHtmlModel() { return m_readHtmlModel; }

nlohmann::json ModelNet::getJson() { return m_json; }

void ModelNet::setJson(nlohmann::json json){ m_json = json; }
