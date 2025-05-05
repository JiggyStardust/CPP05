/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:55:02 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 13:40:59 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery creation form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: constructed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: destructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	std::cout << "ShrubberyCreationForm: copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		std::cout << "ShrubberyCreationForm: copy assignment operator called" << std::endl;
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw AForm::GradeTooLowException();
	std::ofstream outfile(_target + "_shrubbery");
	if (!outfile)
		throw std::runtime_error("Opening outfile: " + _target + "_shrubbery");
	outfile << "    oxoxoo    ooxoo\n";
	outfile << "  ooxoxo oo  oxoxooo\n";
	outfile << " oooo xxoxoo ooo ooox\n";
	outfile << " oooo xxoxoo ooo ooox\n";
	outfile << "  oxo xooxoooo o ooo\n";
	outfile << "    ooo\\oo\\  /o/o\n";
	outfile << "        \\  \\/ /\n";
	outfile << "         |   /\n";
	outfile << "         |  |\n";
	outfile << "         | D|\n";
	outfile << "         |  |\n";
	outfile << "         |  |\n";
	outfile << "  ______/____\\____\n";
	outfile.close();
}
