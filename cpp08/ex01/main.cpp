#include <iostream>
#include "Span.hpp"


int main() {
    srand(time(NULL));
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << "random test" << std::endl;

    Span randomspan = Span(100000);
    for (int i = 0; i < 100000; i++)
    {
        randomspan.addNumber((rand() % 500));
    }

    std::cout << randomspan.shortestSpan() << std::endl;
    std::cout << randomspan.longestSpan() << std::endl;

    std::cout << "many test" << std::endl;

    srand(time(NULL));
    Span many = Span(10);
    many.addNumber(55);
    many.addNumber(115);
    many.addNumber(44);
    many.addNumber(0);
    many.addNumber(21);
    many.addNumber(74);
    many.addNumber(11);
    many.addNumber(68);
    many.addNumber(32);
    many.addNumber(91);
    std::cout << many.shortestSpan() << std::endl;
    std::cout << many.longestSpan() << std::endl;
}
