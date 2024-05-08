/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:45:26 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/08 22:22:25 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    {
        Intern  someRandomIntern;
        Form*   rrf;

        // rrf = someRandomIntern.makeForm("robotomy", "Bender");
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    
    try {
        Bureaucrat bureaucrat("Dasha", 5);
        ShrubberyCreationForm formShrubbery("Shrubbery");
        RobotomyRequestForm formRobotomy("Robotomy");
        PresidentialPardonForm formPardon("President");

        std::cout << "\n                SHRUBBERY FORM" << std::endl;
        bureaucrat.signForm(formShrubbery);
        bureaucrat.executeForm(formShrubbery);
        std::cout << "\n                ROBOTOMY FORM" << std::endl;
        bureaucrat.signForm(formRobotomy);
        bureaucrat.executeForm(formRobotomy);
        bureaucrat.executeForm(formRobotomy);
        bureaucrat.executeForm(formRobotomy);
        bureaucrat.executeForm(formRobotomy);
        std::cout << "\n                PARDON FORM" << std::endl;
        bureaucrat.signForm(formPardon);
        bureaucrat.executeForm(formPardon);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
