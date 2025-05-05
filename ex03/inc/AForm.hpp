/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:37:32 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 13:24:37 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;
	
	public:
		AForm(std::string name = "default", const int gradeToSign = 1, const int gradeToExec = 1); // take consts away?
		~AForm();
		AForm(const AForm& other);
		AForm & operator = (const AForm& other);

		const std::string& getName() const ;
		bool	getSigned() const;
		int 	getGradeToSign() const;
		int 	getGradeToExec() const;
		
		void	beSigned(Bureaucrat& b);
		virtual void execute(Bureaucrat const & executor) const = 0;

		
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw() override;
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() override;
	};

	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw() override;
	};
};

std::ostream & operator<<(std::ostream &os, const AForm &f);