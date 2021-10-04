//
// Created by Denis Nadey on 13.06.2021.
//

#include "Span.hpp"

Span::Span(size_t quntity) {
    max = quntity;
}

Span::Span(const Span &other) {
    operator=(other);
}

Span &Span::operator=(const Span &other) {
    max  = other.max;
    nums.clear();
    nums = other.nums;
    return *this;
}

Span::~Span() { nums.clear();}

size_t Span::shortestSpan(void) const {
if (nums.size() <= 1)
    throw notenoughNumbers();
std::multiset<int>::iterator second_t = nums.begin();
std::multiset<int>::iterator next_t = ++nums.begin();
size_t mindiff = std::abs(*next_t - *second_t);
    while (next_t != nums.end())
    {
        size_t diff = std::abs(*next_t - *second_t);
        if (diff < mindiff)
            mindiff = diff;
        second_t++;
        next_t++;
    }
    return mindiff;
}

size_t Span::longestSpan(void) const {
    if (nums.size() <= 1)
        throw notenoughNumbers();
    long bigger = *std::max_element(nums.begin(), nums.end());
    long lesser = *std::min_element(nums.begin(), nums.end());
    return (std::abs(bigger - lesser));
}

void Span::addNumber(int value) {
    if (nums.size() == max)
        throw fullspan();
    nums.insert(value);
}

const char *Span::fullspan::what() const throw() {
    return exception::what();
}

const char *Span::notenoughNumbers::what() const throw() {
    return exception::what();
}
