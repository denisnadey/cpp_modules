#include <iostream>
#include "Array.hpp"

int main() {
    std::cout << "Creating array of size 5..." << std::endl;
    Array<int> arr(5);
    Array<int> arr_copy(3);

    arr[3] = 4;
    arr_copy = arr;



    std::cout << "arr: [";

    for (int i = 0; i < 5; i++) {

        if (i == 4)
        {
            std::cout << arr[i] << "] ";
        } else
        {
            std::cout << arr[i] << "] [";
        }

    }
    std::cout << std::endl;



    std::cout << "arr_copy: [";

    for (int i = 0; i < 5; i++) {

        if (i == 4)
        {
            std::cout << arr_copy[i] << "] ";
        } else
        {
            std::cout << arr_copy[i] << "] [";
        }

    }
    std::cout << std::endl;


    Array<std::string> array_test(5);
    array_test[2] = "da";

    for (int i = 0; i < 5; i++) {

        std::cout <<  "[" <<array_test[i] << "]" << " ";

    }
    std::cout << std::endl;
}
