#ifndef CONTACT_PHONEBOOK_HPP
#define CONTACT_PHONEBOOK_HPP
#include "Contact.hpp"
# include "stdlib.h"
class PhoneBook
{
public:
    PhoneBook();
    int add_contact();
    void show_all_contact();
    void search_contact();

private:
    int         quntityContact;
    Contact     contacts[8];

};


#endif
