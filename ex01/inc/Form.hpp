/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:18:19 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/02 15:03:35 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;
	
	public:
		Form(std::string name = "default", int gradeToSign = 1, int gradeToExec = 1);
		~Form();
		Form(const Form& other);
		Form & operator = (const Form& other);

		const std::string& getName() const ;
		bool	getSigned();
		const int getGradeToSign();
		const int getGradeToExec();
		void	beSigned(Bureucrat& b);


	
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
};

std::ostream & operator<<(std::ostream &os, const Form &f);