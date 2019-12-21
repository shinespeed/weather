#include <iostream>
#include <string>
#include "CityModel.hpp"
#include "CityController.hpp"
#include "CityView.hpp"


int main(void){
    
    CityModel cityModel;
    
    cityModel.setNameCity("Odessa, usa");
    CityController cityController(cityModel);
    cityController.updateData();
    CityView cityView(cityModel);
    cityView.viewDataWeather();
    
    return 0;
}
