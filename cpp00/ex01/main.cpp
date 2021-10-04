#include "Contact.hpp"
#include "Phonebook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string bufferline;
    std::cout << "Welcome in your CrappyPhoneBook" << std::endl;
    std::cout << "write (SEARCH) or (ADD) or (EXIT) " << std::endl;
    std::cout << "choose:  ";
    while (std::getline(std::cin, bufferline))
    {
        trim(bufferline);
        if (bufferline == "ADD")
        {
            if (!phoneBook.add_contact())
                std::cout << "the memory is full ( only 8 slots)" << std::endl;
            std::cout << "choose: ";
        } else if (bufferline == "EXIT")
        {
            std::cout << "bye bye" << std::endl;
            exit (0);
        } else if (bufferline == "SEARCH")
        {
            phoneBook.show_all_contact();
            phoneBook.search_contact();
            std::cout << "choose: ";
        }
        else
            std::cout << "choose: ";
    }
    std::cout << std::endl;
    std::cout << "bye bye" << std::endl;
    return (0);
}
