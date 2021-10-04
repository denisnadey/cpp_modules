//
// Created by Denis Nadey on 11.06.2021.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template <typename T>
class Array
{
private:
    size_t _len_arr;
public:
    T* array;
    Array(){
        array = NULL;
        _len_arr = 0;
    };
    ~Array()
    {
        if (_len_arr)
        {
            delete [] array;
        }
    };
    Array(const Array& other) {
        *this = other;
    };
    Array(size_t n)
    {
        if (n == 0) {
            array = NULL;
            _len_arr = 0;
        } else
        {
            _len_arr = n;
            array = new T[_len_arr];
        }
    }
    Array& operator=(const Array& other)
    {
        if (this->_len_arr)
        {
            delete [] array;
        }
        array = new T[other._len_arr];
        _len_arr = other._len_arr;
        for (size_t i = 0; i < other._len_arr; i++) {
            array[i] = other.array[i];
        }
        return *this;
    }

    size_t size() const {
        return _len_arr;
    }
    T& operator[](size_t n) {
        if (0 <= n && n < _len_arr) {
            return array[n];
        } else {
            throw std::exception();
        }
    }
    const T& operator[](size_t n) const {
        if (0 <= n && n < _len_arr) {
            return array[n];
        } else {
            throw std::exception();
        }
    }
};


#endif //EX02_ARRAY_HPP
