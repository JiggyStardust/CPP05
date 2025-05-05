/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:43:25 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/05 15:57:28 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() 
{
	std::cout << "Intern: constructor" << std::endl;
}

Intern::~Intern() 
{
	std::cout << "Intern: destructor" << std::endl;
}

Intern::Intern(const Intern& other) {}

Intern& Intern::operator=(const Intern& other)
{
	return (*this);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	
}