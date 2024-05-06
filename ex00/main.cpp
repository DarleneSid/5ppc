/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:12:33 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/06 21:42:25 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat bureaucrat("Dasha", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat bureaucrat("Margo", 150);

        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    
     try {
        Bureaucrat bureaucrat("Nastya", 100);

        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
