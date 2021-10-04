//
// Created by Denis Nadey on 10.06.2021.
//

#ifndef EX00_CUSTOMCAST_HPP
#define EX00_CUSTOMCAST_HPP


class CustomCast {
public:
    CustomCast();
    CustomCast(std::string& str, std::string& valuestring);
    ~CustomCast();
    void printByFormat(char value) const;
    void printByFormat(int value) const;
    void printByFormat(double value) const;
    void printByFormat(float value) const;
};


#endif //EX00_CUSTOMCAST_HPP
