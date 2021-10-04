#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err58-cpp"
#include "Contact.hpp"


int				Contact::_object = 0;


const std::string	Contact::_fields[11] = {
        "first name",
        "last name",
        "nickname",
        "login",
        "postal address",
        "email address",
        "birthday",
        "date",
        "favorite meal",
        "underwear color",
        "darkest secret"
};


std::string Contact::_substring_std(std::string str) {
    if (str.length() <= 10)
        return str;
    else
        return str.substr(0, 9) + '.';
}


void Contact::showContact() {
    std::cout << "|";
    std::cout << std::setw(10) << this->_index;
    std::cout << "|";
    std::cout << std::setw(10) << _substring_std(this->_string_field[0]);
    std::cout << "|";
    std::cout << std::setw(10) << _substring_std(this->_string_field[1]);
    std::cout << "|";
    std::cout << std::setw(10) << _substring_std(this->_string_field[2]);
    std::cout << "|" << std::endl;
}

void Contact::print_info_class() {
    for(int i = 0; i <= 10; i++)
        std::cout << Contact::_fields[i] << ": " << this->_string_field[i] << std::endl;

}

void Contact::fill_class_contact() {
    for (int i = 0; i <= 10; i++) {
        std::cout << Contact::_fields[i] << "=> ";
        getline(std::cin, this->_string_field[i]);
        if (std::cin.eof())
            exit(0);
    }
    std::cout << "Contact successfully added ! ! !" << std::endl;
    this->_set_contact = true;
}

Contact::Contact() {
    this->_index = Contact::_object;
    Contact::_object++;
    for (int i = 0; i <= 10; i++) {
        this->_string_field[i] = "(empty)";
        this->_set_contact = false;
    }
}

Contact::~Contact() {}



#pragma clang diagnostic pop