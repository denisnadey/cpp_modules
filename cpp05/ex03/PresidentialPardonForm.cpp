//
// Created by Denis Nadey on 09.06.2021.
//

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presrform", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), target(other.target){
    *this = other;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    this->target = other.target;
    return *this;
}
