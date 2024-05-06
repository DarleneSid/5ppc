/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:38:36 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/06 21:38:36 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try {
        Bureaucrat bureaucrat("Dasha",11);
        Form form("Current Form", 10);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat("Margo", 5);
        Form form("Current Form", 10);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
