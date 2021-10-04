//
// Created by Denis Nadey on 11.06.2021.
//

#ifndef EX01_ITER_H
#define EX01_ITER_H


template<typename T>
void iter(T *arr, size_t len, void (*f)(T &)) {
    for (size_t i = 0; i <= len; i++)
        f(arr[i]);
}


template<typename T>
void printval(T& value) {
    std::cout << value << " - check" << std::endl;
}
#endif //EX01_ITER_H
