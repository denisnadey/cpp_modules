//
// Created by Denis Nadey on 09.06.2021.
//

#include <iostream>
#include "Form.hpp"





Form::Form(std::string name, int grade_sign, int execute_grade) {
    this->_name_form = name;
    this->_grade_sign = grade_sign;
    this->_execute_grade = execute_grade;
    checkGrade(grade_sign);
    checkGrade(execute_grade);
}



Form::~Form() {}

Form &Form::operator=(const Form &form) {
    this->_execute_grade = form._execute_grade;
    this->_grade_sign = form._grade_sign;
    this->_name_form = form._name_form;
    return *this;
}

Form::Form(const Form &other) {
    operator=(other);
}

bool Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->_execute_grade)
    {
        this->_is_signed = true;
    }
    else{
        throw Form::GradeTooLowException();
    }
}

bool Form::checkGrade(int grade) {
    if (grade < 1) {
        throw Form::GradeTooHighException();
    } else if (grade > 150) {
        throw Form::GradeTooLowException();
    }
    return true;
}


const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream& operator <<(std::ostream& out, const Form& form) {
    std::cout << "Form "<< form.getName() << ",\ngrade to sign: " << form.getGradeToSign() << std::endl;
    std::cout << "grade to execute: " << form.getGradeToExecute() << std::endl;
    std::cout << "is signed: " << form.getIsSigned() << std::endl;
    return out;
}
