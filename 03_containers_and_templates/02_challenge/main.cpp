#include <iostream>
#include <string>
#include <list>
#include "stack.hpp"


int main() {
    Stack<int, std::vector<int>> vec_stack;

    vec_stack.push(1);
    vec_stack.push(2);
    vec_stack.push(3);
    
    vec_stack.pop(); // 3
    std::cout << vec_stack.top() << std::endl; // 2
    std::cout << vec_stack.top() << std::endl; // 2


    Stack<std::string, std::list<std::string>> list_stack;

    list_stack.push("Hello,");
    list_stack.push("World");
    
    list_stack.pop(); // World
    list_stack.pop(); // Hello,
    list_stack.pop(); // empty message

    return 0;
}