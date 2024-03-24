#include <vector>
#include <list>
#include <deque>
#include <string>

#include "print.hpp"



int main () {
    std::vector<int> vectorIntElements {1, 2, 3, 4, 5};
    std::list<std::string> listStringElements = {"Tom", "Bob", "Alice"};
    std::deque<float> dequeStringElements = {1.1, 2.2, 3.3, 4.4};

    print_elements(vectorIntElements);
    print_elements(listStringElements);
    print_elements(dequeStringElements);

    return 0;
}