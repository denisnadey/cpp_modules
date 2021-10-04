//
// Created by Denis Nadey on 09.06.2021.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"



class PresidentialPardonForm : public Form {
private:
    std::string target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm&	operator =(const PresidentialPardonForm& other);
    void execute(const Bureaucrat& executor) const;
};

#endif //EX02_PRESIDENTIALPARDONFORM_HPP
