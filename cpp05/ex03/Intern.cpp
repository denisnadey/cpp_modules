//
// Created by Denis Nadey on 09.06.2021.
//

#include "Intern.hpp"


Intern::Intern() {

}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern::~Intern() {}

Intern&	Intern::operator =(const Intern& other) {
    (void)other;
    return *this;
}

Form*	Intern::createPresidentialPardonForm(std::string& target){
    return new PresidentialPardonForm(target);
}

Form*	Intern::createRobotomyRequestForm(std::string& target) {
    return new RobotomyRequestForm(target);
}

Form*	Intern::createShrubberyCreationForm(std::string& target) {
    return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string form_name, std::string target) const {
    Form *form = NULL;
    Form* forms[3];
    forms[0] = new PresidentialPardonForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new ShrubberyCreationForm(target);
    for (int i = 0; i < 3; i++) {
        if (forms[i]->getName() == form_name) {
            form = forms[i];
        } else {
            delete forms[i];
        }
    }
    if (form)
        std::cout << "Intern creates " << form_name << std::endl;
    else
        std::cout << form_name << " does not exist" << std::endl;
    return form;
}
