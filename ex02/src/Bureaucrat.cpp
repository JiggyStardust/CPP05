/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:00:11 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 14:20:31 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(1)
{
	std::cout << "Bureaucrat: default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string input, int value) : _name(input)
{
	if (value < 1)
	{
		throw	GradeTooHighException();
	}
	else if (value > 150)
	{
		throw GradeTooLowException();
	}
	_grade = value;
	std::cout << "Bureaucrat: " << _name << ": constructor" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat: "<< _name << ": destructor" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat: copy constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &other)
{
	if (this != &other)
	{
		std::cout << "Bureaucrat: copy assignment operator" << std::endl;
		_grade = other._grade;
	}
	return (*this);
}

const std::string& Bureaucrat::getName() const
{
	return (_name);
}


int		Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cout << getName() << " couldn't sign " << f.getName()
		<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	std::cout << getName() << " trying to execute form " << form.getName() << std::endl;
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}
	std::cout << getName() << " executed " << form.getName() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return os;
}
