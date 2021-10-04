//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef ex03_INTERN_HPP
#define ex03_INTERN_HPP
#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:
    Intern();
    Intern(const Intern& other);
    virtual ~Intern();

    Intern&	operator =(const Intern& other);
    Form*	makeForm(std::string form_name, std::string target) const;

    Form*	createPresidentialPardonForm(std::string& target);
    Form*	createRobotomyRequestForm(std::string& target);
    Form*	createShrubberyCreationForm(std::string& target);
};


#endif //ex03_INTERN_HPP
