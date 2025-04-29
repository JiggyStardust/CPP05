/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:22:17 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/29 14:26:28 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(std::string name) : _name(name), _signed(false)
{
	std::cout << "Form: " << _name << ": constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form: " << _name << ": destructor" << std::endl;
}

