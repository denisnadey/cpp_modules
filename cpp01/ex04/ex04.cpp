#include <iostream>

int main() {
    std::string newstring = "HI THIS IS BRAIN";
    std::string *pointer_newstring = &newstring;
    std::string &reference_newstring = newstring;

    std::cout << *pointer_newstring << std::endl;
    std::cout << reference_newstring << std::endl;
    return 0;
}
