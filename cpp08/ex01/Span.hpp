//
// Created by Denis Nadey on 13.06.2021.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


# include <set>
# include <cmath>
# include <algorithm>

class Span {
private:
    std::multiset<int> nums;
    size_t max;
public:
    Span(size_t quntity);
    Span(const Span &other);
    Span& operator=(Span const &other);
    virtual ~Span();
    size_t shortestSpan (void) const;
    size_t longestSpan (void) const;
    void addNumber (int value);
    template<typename iterator>
    void addNumber(iterator begin, iterator end)
    {
        if (this->nums.size() + std::distance(begin, end) > this->max)
            throw Span::fullspan();
        this->nums.insert(begin, end);
    }
    class fullspan: public std::exception{
    virtual const char* what() const throw();
};
class notenoughNumbers : public std::exception{
    virtual const char * what() const throw();
};

};


#endif //EX01_SPAN_HPP
