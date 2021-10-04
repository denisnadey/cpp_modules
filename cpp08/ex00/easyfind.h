//
// Created by Denis Nadey on 12.06.2021.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H


# include <map>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    return (std::find(container.begin(), container.end(), value));
}

template<typename key_type, typename value_type>
typename std::map<key_type, value_type>::iterator easyfind(std::map<key_type, value_type> &container, int value)
{
    typename std::map<key_type, value_type>::iterator i = container.begin();
    while (container.end() != i)
    {
        if (i->second == value)
            return i;
        ++i;
    }
    return container.end();
}

template<typename key_type, typename value_type>
typename std::multimap<key_type, value_type>::iterator easyfind(std::multimap<key_type, value_type> &container, int value)
{
    typename std::multimap<key_type, value_type>::iterator i = container.begin();
    while (container.end() != i)
    {
        if (i->second == value)
            return i;
        ++i;
    }
    return container.end();
}


#endif //EX00_EASYFIND_H
