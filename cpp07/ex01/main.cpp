#include <iostream>
#include "iter.h"

int main() {
    std::cout << "this is string test" << std::endl << std::endl;
    std::string test[] = { "da", "mama", "papa"};
    iter(test, test->length(), &printval);
    std::cout << "this is int test" << std::endl << std::endl;
    int tes2[4] = { 1, 2, 3, 4};
    iter(tes2, 3, &printval);
    std::cout << "this is bool test" << std::endl << std::endl;
    bool test3[] = { true, false, true};
    iter(test3, 2, &printval);
    return 0;
}
