//
// Created by Denis Nadey on 13.06.2021.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

# include <set>
# include <cmath>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public:
    MutantStack();
    MutantStack(MutantStack<T> const &other);
    virtual ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator end();
    iterator begin();

    MutantStack<T> &operator=(MutantStack<T> const &other);
};

template<typename T>
typename  MutantStack<T>::iterator MutantStack<T>::end(void) {
    return (this->c.end());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return (this->c.begin());
}

template<typename T>
MutantStack<T>::MutantStack() {
    std::stack<T>();
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) {
    operator=(other);
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
    this->c = other.c;
    return (*this);
}


#endif //EX02_MUTANTSTACK_HPP
