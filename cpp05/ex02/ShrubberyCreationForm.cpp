//
// Created by Denis Nadey on 09.06.2021.
//

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrform", 145, 137) {
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : 	Form(other), target(other.target) {
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);

    try {
    std::string test =
                "          .     .  .      +     .      .          .\n"
                "     .       .      .     #       .           .\n"
                "        .      .         ###            .      .      .\n"
                "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                "          .      . \"####\"###\"####\"  .\n"
                "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
                "  .             \"#########\"#########\"        .        .\n"
                "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
                "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
                "                .\"##\"#####\"#####\"##\"           .      .\n"
                "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
                "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
                "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
                "            .     \"      000      \"    .     .\n"
                "       .         .   .   000     .        .       .\n"
                ".. .. ..................O000O........................ ...... ...";
        std::ofstream shrubbery_file;

        shrubbery_file.open(this->target + "_shrubbery");
        shrubbery_file << test;
        shrubbery_file.close();
    }
    catch (...)
    {
        std::cout << "FATAL" << std::endl;
    }
}

const char *ShrubberyCreationForm::TargetFileOpenException::what() const throw() {
    return "bad open file";
}
