/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:32:41 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/08 22:32:41 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : Form( src ), _target( src._target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
    (void)rhs;
    return *this;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if ( this->getSigned() == false )
        throw Form::NotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute() ) {
        throw Form::GradeTooLowException();
    }
    std::ofstream file;
    file.open(( this->getName() + "_shrubbery" ).c_str());
    file << "                                  # #### #### " << std::endl;
    file << "                             ### /#|### |/#### " << std::endl;
    file << "                            ##/#/ ||/##/_/##/_# " << std::endl;
    file << "                          ###  /###|/ / # ### " << std::endl;
    file << "                        ##__#_## | #/###_/_#### " << std::endl;
    file << "                       ## #### #  #| /  #### ##/## " << std::endl;
    file << "                        __#_--###`  |{,###---###-~ " << std::endl;
    file << "                                   }{{ " << std::endl;
    file << "                                   }}{ " << std::endl;
    file << "                                   }}{ " << std::endl;
    file << "                                   {{} " << std::endl;
    file << "                             , -=-~{ .-^- _  " << std::endl;
    file << "                                   `} " << std::endl;
    file << "                                    { " << std::endl;
    file.close();
}
