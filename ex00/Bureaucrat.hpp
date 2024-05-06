/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:12:28 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/06 21:41:50 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

        Bureaucrat();

    public:
        Bureaucrat( const std::string& name, int grade );
        Bureaucrat( const Bureaucrat& src );
        Bureaucrat& operator=( const Bureaucrat& rhs );
        ~Bureaucrat();

        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade is too high!"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade is too low!"; }
    };

};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif // BUREAUCRAT_HPP
