#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

typedef	struct 	Data {
    std::string		str1;
    int				n;
    std::string		str2;
}					Data;

void	*serialize(void) {
    char	*raw = new char[38];
    char	s1[18];
    char	s2[18];
    int		intval;
    srand(time(0));
    std::string	hash = "ABCDEF0123456789";
    for (int i = 0; i < 17; i++) {
        s1[i] = hash[rand() % 16];
        s2[i] = hash[rand() % 16];
    }
    s1[17] = 0;
    s2[17] = 0;

    intval = rand() % 200;

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "int: " << intval << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    char *tmpraw = s1;
    for (int i = 0; i < 17; i++)
        raw[i] = *(tmpraw++);
    tmpraw = reinterpret_cast<char*>(&intval);
    for (int i = 17; i < 21; i++)
        raw[i] = *(tmpraw++);
    tmpraw = s2;
    for (int i = 21; i < 38; i++)
        raw[i] = *(tmpraw++);
    return (reinterpret_cast<void*>(raw));
}

Data	*deserialize(void *raw) {
    char *rawpointer = reinterpret_cast<char*>(raw);
    Data *ret = new Data;
    char *tmp = new char[4];
    ret->str1 = std::string(rawpointer, 17);
    ret->str2 = std::string(rawpointer + 21, 17);
    rawpointer += 17;
    for (int i = 0; i < 4; i++)
        tmp[i] = *(rawpointer++);
    ret->n = *(reinterpret_cast<int*>(tmp));
    delete[] tmp;
    return (ret);
}

int 	main() {
    void *raw = serialize();
    Data *test = deserialize(raw);
    std::cout << "---------------------" << std::endl;
    std::cout << "s1: " << test->str1 << std::endl;
    std::cout << "int: " << test->n << std::endl;
    std::cout << "s2: " << test->str2 << std::endl;
    delete		test;
    delete[]	reinterpret_cast<char*>(raw);
    return (0);
}