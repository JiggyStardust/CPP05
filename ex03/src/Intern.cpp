/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:43:25 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/07 16:06:09 by sniemela         ###   ########.fr       */
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

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&)
{
	return (*this);
}

static AForm* makeShrubbery(const std::string& tgt)
{
    return new ShrubberyCreationForm(tgt);
}

static AForm* makeRobotomy(const std::string& tgt) 
{
    return new RobotomyRequestForm(tgt);
}

static AForm* makePresidential(const std::string& tgt) 
{
    return new PresidentialPardonForm(tgt);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
	const std::string formNames[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

    AForm* (*formCreators[3])(const std::string&) = {
        makeShrubbery,
        makeRobotomy,
        makePresidential
    };

	for (int i = 0; i < 3; ++i)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return formCreators[i](target);
		}
	}
	throw std::runtime_error 
	{
		"Intern: unknown form name '" + name + "'\n"
	};	

}