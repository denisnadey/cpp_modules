#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.h"

int main() {
    {
        std::vector<int> vec(5, 5);
        for (int i = 0; i < 5; i++)
            vec[i] = i;
        std::vector<int>::iterator found = easyfind(vec, 2);
        if (found == vec.end())
            std::cout << "cannot find 2 in vector" << std::endl;
        else
            std::cout << "found 2 in vector " << *found << std::endl;
        if (easyfind(vec, 120) == vec.end())
            std::cout << "120 not found in vector" << std::endl;
    }
    {
        std::list<int> lst;
        for (int i = 0; i < 5; i++)
            lst.push_back(i + 42);
        std::list<int>::iterator found = easyfind(lst, 42);
        if (found == lst.end())
            std::cout << "cannot find 42 in list" << std::endl;
        else
            std::cout << "found 42 in list " << *found << std::endl;
        if (easyfind(lst, 120) == lst.end())
            std::cout << "120 not found in list" << std::endl;
    }
    return (0);
}
