/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:00:31 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/29 13:58:38 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

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

		std::string const getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

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