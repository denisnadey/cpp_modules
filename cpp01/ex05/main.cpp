#include <iostream>
#include "Human.hpp"


int main() {
    Human marly;
    std::cout << marly.identify() << std::endl;
    std::cout << marly.getBrain().identify() << std::endl;
    return 0;
}
