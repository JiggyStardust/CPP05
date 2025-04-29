/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:59:08 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/29 13:59:20 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "\n-----SUCCEEDS------" << std::endl;
		std::cout << "Trying to construct Hank with 140 points\n" << std::endl;
		Bureaucrat hank("Hank", 140);
		std::cout << hank << std::endl;
		std::cout << "\n-----PARTLY SUCCEEDS------" << std::endl;
		std::cout << "Trying to decrement Hank's grade (points get higher) until we hit the limit\n" << std::endl;
		for (int i = 0; i < 150; i++)
		{
			std::cout << "Trial number " << i + 1 << ": \n---> ";
			try
			{
				hank.decrementGrade();
			}
			catch (std::exception &e)
			{
				std::cout << "Error: " << e.what() << std::endl;
				break ;
			}
			std::cout << hank << std::endl;
		}
		std::cout << "\nLeaving the scope, destructor should be called" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\n-----SUCCEEDS------" << std::endl;
		Bureaucrat toby("Toby", 10);
		std::cout << toby << std::endl;
		std::cout << "Calling copy constructor\n" << std::endl;
		Bureaucrat copy(toby);
		std::cout << copy << std::endl;
		std::cout << "\n-----PARTLY SUCCEEDS------" << std::endl;
		std::cout << "Trying to increment copy's grade (points get lower) until we hit the limit\n" << std::endl;
		for (int i = 0; i < 150; i++)
		{
			std::cout << "Trial number " << i + 1 << ": \n---> ";
			try
			{
				copy.incrementGrade();
			}
			catch (std::exception &e)
			{
				std::cout << "Error: " << e.what() << std::endl;
				break ;
			}
			std::cout << copy << std::endl;
		}
		std::cout << "\nLeaving the scope, destructors should be called" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n-----SHOULD FAIL------" << std::endl;
		std::cout << "Trying to construct Hailey with 151 points\n" << std::endl;
		Bureaucrat hailey("Hailey", 151);
		std::cout << hailey << std::endl;
		std::cout << "\nLeaving the scope, destructors should be called" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}