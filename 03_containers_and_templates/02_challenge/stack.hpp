#include <iostream>
#include <vector>

template <typename T, typename Container = std::vector<T>>

class Stack {
public:
    void push(const T& value) { // スタックに値を入れる
        container.push_back(value);    
    }

    void pop() {     // スタックの一番上の値を取り出す
        if(is_empty()) {
            std::cerr << "Container is empty!!" << std::endl;
            exit(EXIT_FAILURE);
        } else {
            std::cout << top() << std::endl;
            container.pop_back();
        }
    }

    T top() const {  // スタックの一番上の値を返す
        if(is_empty()) {
            std::cerr << "Container is empty!!" << std::endl;
            exit(EXIT_FAILURE);
        } else {
            return container.back();
        }    
    }

    bool is_empty() const {  // スタックが空の場合に返す
        return container.empty();
    }

private:
    Container container;
};