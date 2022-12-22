//
// Created by jimin on 2022/12/12.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main( void ) {
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            SCF test              ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b1("jimin", 10);
			ShrubberyCreationForm s1("abcd");
			b1.signForm(s1);
			b1.executeForm(s1);


		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	{
		std::cout << "" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "*******            PPF test              ********" << std::endl;
		std::cout << "*************************************************" << std::endl;
		std::cout << "" << std::endl;
		try {
			Bureaucrat b1("jimin", 3);
			PresidentialPardonForm p1("abcd");
			b1.signForm(p1);
			b1.executeForm(p1);


		} catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}