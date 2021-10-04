//
// Created by Denis Nadey on 09.06.2021.
//

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("shrform", 72, 45){
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), target(other.target) {
    *this = other;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "VRHJHSJSHHSJSHSJJHSHJSHS. . . . . . ." << std::endl;
    srand( time(0) );
    if (rand() % 2) {
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << this->target << " not been robotomized " << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    this->target = other.target;
    return *this;
}
