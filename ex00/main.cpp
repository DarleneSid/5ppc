#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat bureaucrat("Dasha", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.smth() << std::endl;
    }
    return EXIT_SUCCESS;
}