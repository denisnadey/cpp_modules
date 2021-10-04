//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form(std::string name,int grade_sign, int execute_grade);
    ~Form();
    Form(const Form& other);
    Form& operator=(const Form&  form);
    int getGradeSign() const { return _grade_sign;};
    int getExecuteGrade() const { return _execute_grade;};
    bool beSigned(const Bureaucrat& bureaucrat);
    std::string getName() const { return _name_form;};
    int getGradeToSign() const {
        return _grade_sign;
    };
    int getGradeToExecute() const {
        return _execute_grade;
    };
    bool getIsSigned() const { return _is_signed;};
    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };
    bool checkGrade(int grade);
private:
    std::string _name_form;
    int         _grade_sign;
    int         _execute_grade;
    bool        _is_signed;
};
std::ostream& operator <<(std::ostream& out, const Form& form);

#endif //EX01_FORM_HPP
