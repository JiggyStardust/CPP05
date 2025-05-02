/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:17 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/02 15:48:35 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : 
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << "Form: " << _name << ": constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form: " << _name << ": destructor" << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _signed(other._signed)
{
	std::cout << "Form: copy constructor" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		std::cout << "Form: copy assignment operator" << std::endl;
		_signed = other._signed;
	}
	return (*this);
}

const std::string& Form::getName() const 
{
	return (_name);
}

bool	Form::getSigned()
{
	return (_signed);
}

const int Form::getGradeToSign()
{
	return (_gradeToSign);
}

const int Form::getGradeToExec()
{
	return (_gradeToExec);
}

void	Form::beSigned(Bureucrat& b)
{
	if (b.getGrade <= getGradeToSign())
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &os, const Form &f)
{
	std::string signed;
	if (f.getSigned())
		signed = "signed";
	else
		signed = "unsigned";
	
	os << "Form: "<< f.getName() << " is " << signed << ", grade to sign: " <<
	f.getGradeToSign() << ", grade to execute: " << f.getGradeToExec() << "." << std::endl;
	return (os);
}