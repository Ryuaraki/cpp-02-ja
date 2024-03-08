#include <iostream>
#include "traffic_light.h" 

int main () {

    std::cout << get_action(TrafficLight::red) << std::endl;
    std::cout << get_action(TrafficLight::yellow) << std::endl;
    std::cout << get_action(TrafficLight::green) << std::endl;

    return 0;
}