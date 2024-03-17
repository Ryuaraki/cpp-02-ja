#include <iostream>
#include "rectangle.h"


int main () {
    Rectangle rectangle{0.0f, 0.0f};
    std::cin >> rectangle.width >> rectangle.height;

    std::cout << Rectangle_area(rectangle) << std::endl;

    return 0;
}