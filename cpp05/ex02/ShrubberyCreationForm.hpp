//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm&	operator =(const ShrubberyCreationForm& other);
    void execute(const Bureaucrat& executor) const;
    class TargetFileOpenException : public std::exception {
        const char* what() const throw();
    };
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
