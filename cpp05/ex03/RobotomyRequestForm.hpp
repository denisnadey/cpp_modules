//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef ex03_ROBOTOMYREQUESTFORM_HPP
#define ex03_ROBOTOMYREQUESTFORM_HPP





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

#endif //ex03_ROBOTOMYREQUESTFORM_HPP
