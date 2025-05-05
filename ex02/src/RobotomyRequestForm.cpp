/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:47:02 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 15:33:22 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: constructed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: destructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	std::cout << "RobotomyRequestForm: copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		std::cout << "RobotomyRequestForm: copy assignment operator called" << std::endl;
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw AForm::GradeTooLowException();
	std::cout << "\n*DRRRRRRRRRR FJOOO FJOO FJOO KRRRRTZZZ...*\n" << std::endl;
	
	std::cout << _target << " has been robotimized ";
	std::srand(time(0));
	if (rand() % 2 == 0)
		std::cout << "successfully" << std::endl;
	else
		std::cout << "unsuccessfully...:(" << std::endl;
}
