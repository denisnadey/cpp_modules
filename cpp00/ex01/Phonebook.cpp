#include "Phonebook.hpp"

PhoneBook::PhoneBook() : quntityContact(0) {}

int PhoneBook::add_contact() {
    if (this->quntityContact < 8) {
        this->contacts[quntityContact].fill_class_contact();
        this->contacts[quntityContact]._set_contact = true;
        this->quntityContact++;
        return (1);
    }
    else {
        return (0);
    }
}

void PhoneBook::show_all_contact() {
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i <= quntityContact; i++)
    {
        if (this->contacts[i]._set_contact)
            this->contacts[i].showContact();
    }

}

void PhoneBook::search_contact() {
    int          temp_num;
    std::string  temp;
    std::cout << "choose index please: ";
    std::getline(std::cin, temp);
    if (!isdigit(temp[0]))
    {
        std::cout << "fatal error !!! (need numbers)" << std::endl;
    }
    else {
        temp_num = std::stoi(temp);
        if (temp_num <= 8 && temp_num >= 0) {
            if (this->contacts[temp_num]._set_contact) {
                this->contacts[temp_num].print_info_class();
            } else {
                std::cout << "index " << temp_num << " is missing" << std::endl;
            }
        } else {
            std::cout << "index " << temp_num << " is missing" << std::endl;
        }
    }
}
