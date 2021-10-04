//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP





#include "Form.hpp"



class RobotomyRequestForm : public Form {
private:
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm&	operator =(const RobotomyRequestForm& other);
    void execute(const Bureaucrat& executor) const;
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
