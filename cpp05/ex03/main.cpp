#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Intern  someRandomIntern;
    Form*   rrf;
    Bureaucrat high("high", 1);
    rrf = someRandomIntern.makeForm("presrform", "Bender");
    if (rrf) {
        rrf->beSigned(high);
        rrf->execute(high);
        delete rrf;
    }
    std::cout << std::endl;
    rrf = someRandomIntern.makeForm("shrform", "Bender");
    if (rrf) {
        rrf->beSigned(high);
        rrf->execute(high);
        delete rrf;
    }
    std::cout << std::endl;
    rrf = someRandomIntern.makeForm("shrsform", "Bender");
    if (rrf) {
        rrf->beSigned(high);
        rrf->execute(high);
        delete rrf;
    }
    std::cout << std::endl;
    return 0;

}
