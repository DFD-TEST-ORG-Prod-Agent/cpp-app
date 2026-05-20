#include <iostream>
#include <string>
#include <vector>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
};

void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    std::cout << "C++ Sample App" << std::endl;
    
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    greet(name);
    
    Calculator calc;
    int result = calc.add(10, 20);
    std::cout << "10 + 20 = " << result << std::endl;
    
    return 0;
}
