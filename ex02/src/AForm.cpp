/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:17 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 09:32:21 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(std::string name, const int gradeToSign, const int gradeToExec) : 
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << "AForm: " << _name << ": constructor" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm: " << _name << ": destructor" << std::endl;
}

AForm::AForm(const AForm& other) :
	_name(other._name),
	_signed(other._signed),
	_gradeToSign(other._gradeToSign),
	_gradeToExec(other._gradeToExec)
{
	std::cout << "AForm: copy constructor" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		std::cout << "AForm: copy assignment operator" << std::endl;
		_signed = other._signed;
	}
	return (*this);
}

const std::string& AForm::getName() const 
{
	return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExec() const
{
	return (_gradeToExec);
}

void	AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream & operator<<(std::ostream &os, const AForm &f)
{
	std::string state;
	if (f.getSigned())
		state = "signed";
	else
		state = "unsigned";
	
	os << "AForm: "<< f.getName() << " is " << state << ", grade to sign: " <<
	f.getGradeToSign() << ", grade to execute: " << f.getGradeToExec() << "." << std::endl;
	return (os);
}