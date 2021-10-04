//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP


#include <string>

class Victim {
protected:
    std::string  _name;
    std::string  _title;
public:
    Victim(const std::string& name);
    ~Victim();
    Victim(const Victim& Victim);
    Victim&		operator =(const Victim& other);

    virtual void    introduce();

    virtual std::string   getName() const
    {
        return this->_name;
    }

    virtual void getPolymorphed() const;
};

std::ostream&		operator <<(std::ostream& out, const Victim& other);

#endif //EX00_VICTIM_HPP
