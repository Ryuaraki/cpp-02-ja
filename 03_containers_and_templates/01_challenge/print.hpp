#include <iostream>

template <typename T>

// template関数をcppと分けると明示的なテンプレートのインスタンス化が必要になる.
void print_elements(const T& elements) {
    for(const auto& element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
