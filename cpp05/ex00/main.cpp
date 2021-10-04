#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat	high("High", 1);
    Bureaucrat	low("Low", 150);

    try {
        Bureaucrat bur("AA", -1);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << high;
        high.dec();
        std::cout << high;
        high.inc();
        std::cout << high;
        high.inc();
        std::cout << high;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << low;
        low.inc();
        std::cout << low;
        low.dec();
        std::cout << low;
        low.dec();
        std::cout << low;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
