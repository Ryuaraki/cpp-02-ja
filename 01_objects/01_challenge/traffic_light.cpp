#include <iostream>
#include <string>
#include "traffic_light.h"

std::string get_action(TrafficLight light) {
    std::string action; 

    if(light == TrafficLight::red) {
        action = "\"Stop\"";
    } else if (light == TrafficLight::yellow) {
        action = "\"Caution\"";
    } else if (light == TrafficLight::green) {
        action = "\"Go\"";
    } else {
        action = "Input error.";
    }

    return action;
}
