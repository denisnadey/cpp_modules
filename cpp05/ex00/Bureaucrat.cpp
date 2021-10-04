//
// Created by Denis Nadey on 07.06.2021.
//

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    operator=(other);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    _name = other._name;
    _grade = other._grade;
    return *this;
}

bool Bureaucrat::can_muttable(int grade) {
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    return true;
}

void Bureaucrat::inc() {
    if (can_muttable(this->_grade - 1))
        this->_grade--;
}

void Bureaucrat::dec() {
    if (can_muttable(this->_grade + 1))
        this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &character) {
    std::cout << character.getName() << ", bureaucrat grade " << character.getGrade() << std::endl;
    return out;
}
