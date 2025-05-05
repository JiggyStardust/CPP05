/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:00:31 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 09:08:37 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int			_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string input, int value);
		~Bureaucrat( void );
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator = (const Bureaucrat &other);

		const std::string& getName() const; // avoid copies, take a reference
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form& f);

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() override; // why do some people have virtual instead?
	};

	class  GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw() override; // why do some people have virtual instead?
	};
};

std::ostream & operator<<(std::ostream &os, const Bureaucrat &b); // os for output stream,  b for bureaucrat