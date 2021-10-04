//
// Created by Denis Nadey on 07.06.2021.
//

#ifndef ex03_BUREAUCRAT_HPP
#define ex03_BUREAUCRAT_HPP


#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    std::string _name;
    int _grade;
public:
    std::string getName() const
    {
        return _name;
    }
    int getGrade() const
    {
        return _grade;
    }
    Bureaucrat(const std::string& name, int grade)
    {
        _name = name;
        _grade = grade;
        if (_grade < 0) {
            throw Bureaucrat::GradeTooHighException();
        } else if (_grade > 150) {
            throw Bureaucrat::GradeTooLowException();
        }
    }
    bool can_muttable(int grade);
    void executeForm( Form& form);
    Bureaucrat(const Bureaucrat& other);
    virtual ~Bureaucrat();
    Bureaucrat& operator =(const Bureaucrat& other);
    void    signForm(Form& form);
    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };
};

std::ostream&	operator <<(std::ostream& out, const Bureaucrat& character);

#endif //ex03_BUREAUCRAT_HPP
