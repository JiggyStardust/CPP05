/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:18:19 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/29 14:23:24 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Form
{
	private:
		const std::string _name;
		bool _signed;
		// • A constant grade required to sign it.
		// • And a constant grade required to execute it.
	
	public:
		Form(std::string name = "default");

};