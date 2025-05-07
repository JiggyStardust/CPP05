/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:59:08 by sniemela          #+#    #+#             */
/*   Updated: 2025/05/07 16:18:52 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"

int	main(void)
{
	// try
	// {
	// 	std::cout << "\n-----SUCCEEDS------" << std::endl;
	// 	std::cout << "Trying to construct Hank with 140 points\n" << std::endl;
	// 	Bureaucrat hank("Hank", 140);
	// 	std::cout << hank << std::endl;
	// 	std::cout << "\n-----PARTLY SUCCEEDS------" << std::endl;
	// 	std::cout << "Trying to decrement Hank's grade (points get higher) until we hit the limit\n" << std::endl;
	// 	for (int i = 0; i < 150; i++)
	// 	{
	// 		std::cout << "Trial number " << i + 1 << ": \n---> ";
	// 		try
	// 		{
	// 			hank.decrementGrade();
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << hank << std::endl;
	// 	}
	// 	std::cout << "\nLeaving the scope, destructor should be called" << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	std::cout << "\n-----SUCCEEDS------" << std::endl;
	// 	Bureaucrat toby("Toby", 10);
	// 	std::cout << toby << std::endl;
	// 	std::cout << "Calling copy constructor\n" << std::endl;
	// 	Bureaucrat copy(toby);
	// 	std::cout << copy << std::endl;
	// 	std::cout << "\n-----PARTLY SUCCEEDS------" << std::endl;
	// 	std::cout << "Trying to increment copy's grade (points get lower) until we hit the limit\n" << std::endl;
	// 	for (int i = 0; i < 150; i++)
	// 	{
	// 		std::cout << "Trial number " << i + 1 << ": \n---> ";
	// 		try
	// 		{
	// 			copy.incrementGrade();
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << copy << std::endl;
	// 	}
	// 	std::cout << "\nLeaving the scope, destructors should be called" << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

	// try
	// {
	// 	std::cout << "\n-----SHOULD FAIL------" << std::endl;
	// 	std::cout << "Trying to construct Hailey with 151 points\n" << std::endl;
	// 	Bureaucrat hailey("Hailey", 151);
	// 	std::cout << hailey << std::endl;
	// 	std::cout << "\nLeaving the scope, destructors should be called" << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }


	// std::cout << "\n\n-----FORMS------" << std::endl;
	// try
	// {
	// 	std::cout << "Creating a Bureaucrat\n";
	// 	Bureaucrat toby("Toby", 10);
	// 	std::cout << toby << std::endl;
	// 	std::cout << "\nCreating a new Form\n";
	// 	ShrubberyCreationForm pass("home");
	// 	std::cout << pass << std::endl;

	// 	std::cout << "Trying to sign the Form:\n";
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	std::cout << pass << std::endl;

	// 	std::cout << "\nDecreasing Bureaucrat's grade and trying to sign again\n";
	// 	try
	// 	{
	// 		toby.decrementGrade();
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
		
	// 	std::cout << toby << std::endl;
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
		
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

	// std::cout << "\n\n-----SHRUBBERY CREATION FORM------" << std::endl;
	// try
	// {
	// 	std::cout << "Creating a Bureaucrat\n";
	// 	Bureaucrat toby("Toby", 145);
	// 	std::cout << toby << std::endl;

	// 	std::cout << "\nCreating a new Form\n";
	// 	ShrubberyCreationForm pass("home");
	// 	std::cout << pass << std::endl;

	// 	std::cout << "Trying to sign the Form:\n";
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	std::cout << pass << std::endl;

	// 	std::cout << "\nDecreasing Bureaucrat's grade as much as possible and trying to execute\n";
	// 	for (int i = 1; i < 150; i++)
	// 	{
	// 		try
	// 		{
	// 			toby.decrementGrade();
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			std::cout << i <<": Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << i << ": " << toby << std::endl;
	// 	}
	// 	std::cout << toby << std::endl;

	// 	std::cout << "\nIncreasing Bureaucrat's grade until it should match desired execGrade, then trying to execute\n";
	// 	int times = toby.getGrade() - pass.getGradeToExec();
	// 	for (int i = 1; i <= times; i++)
	// 	{
	// 		try
	// 		{
	// 			toby.incrementGrade();
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << i << ": " << toby;
	// 	}
	// 	std::cout << toby << std::endl;
	// 	std::cout << pass << std::endl;
	// 	try
	// 	{
	// 		toby.executeForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }
	
	// std::cout << "\n\n-----ROBOTOMY FORM------" << std::endl;
	// try
	// {
	// 	std::cout << "Creating a Bureaucrat\n";
	// 	Bureaucrat toby("Toby", 72);
	// 	std::cout << toby << std::endl;

	// 	std::cout << "\nCreating a new Form\n";
	// 	RobotomyRequestForm pass("Elon Musk");
	// 	std::cout << pass << std::endl;

	// 	std::cout << "Trying to sign the Form:\n";
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	std::cout << pass << std::endl;
		

	// 	std::cout << "\nIncreasing Bureaucrat's grade until it should match desired execGrade, then trying to execute\n";
	// 	int times = toby.getGrade() - pass.getGradeToExec();
	// 	for (int i = 1; i <= times; i++)
	// 	{
	// 		try
	// 		{
	// 			toby.incrementGrade();
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << i << ": " << toby;
	// 	}
	// 	std::cout << toby << std::endl;
	// 	std::cout << pass << std::endl;
	// 	try
	// 	{
	// 		toby.executeForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

	// std::cout << "\n\n-----PRESIDENTIAL PARDON FORM------" << std::endl;
	// try
	// {
	// 	std::cout << "Creating a Bureaucrat\n";
	// 	Bureaucrat toby("Toby", 30);
	// 	std::cout << toby << std::endl;

	// 	std::cout << "\nCreating a new Form\n";
	// 	PresidentialPardonForm pass("Zacharias Smith");
	// 	std::cout << pass << std::endl;

	// 	std::cout << "Trying to sign the Form:\n";
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	std::cout << pass << std::endl;
		
	// 	std::cout << "\nIncreasing Bureaucrat's grade until it should match desired signGrade, then trying to sign\n";
	// 	int times = toby.getGrade() - pass.getGradeToSign();
	// 	for (int i = 1; i <= times; i++)
	// 	{
	// 		try
	// 		{
	// 			toby.incrementGrade();
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << i << ": " << toby;
	// 	}
	// 	std::cout << toby << std::endl;
	// 	std::cout << pass << std::endl;
	// 	try
	// 	{
	// 		toby.signForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		toby.executeForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	std::cout << "\nIncreasing Bureaucrat's grade until it should match desired execGrade, then trying to execute\n";
	// 	times = toby.getGrade() - pass.getGradeToExec();
	// 	for (int i = 1; i <= times; i++)
	// 	{
	// 		try
	// 		{
	// 			toby.incrementGrade();
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			std::cout << "Error: " << e.what() << std::endl;
	// 			break ;
	// 		}
	// 		std::cout << i << ": " << toby;
	// 	}
	// 	std::cout << toby << std::endl;
	// 	std::cout << pass << std::endl;
	// 	try
	// 	{
	// 		toby.executeForm(pass);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }




	std::cout << "\n\n-----INTERN-----" << std::endl;
	try
	{
		std::cout << "Creating a Bureaucrat\n";
		Bureaucrat toby("Toby", 30);
		std::cout << toby << std::endl;

		std::cout << "\nCreating an Intern and a new Form\n";

		Intern charlie;
		
		AForm *pass = charlie.makeForm("robotomy request", "Burt");
		std::cout << *pass << std::endl;

		std::cout << "Trying to sign the Form:\n";
		try
		{
			toby.signForm(*pass);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << *pass << std::endl;
		
		std::cout << "\nIncreasing Bureaucrat's grade until it should match desired signGrade, then trying to sign\n";
		int times = toby.getGrade() - pass->getGradeToSign();
		for (int i = 1; i <= times; i++)
		{
			try
			{
				toby.incrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cout << "Error: " << e.what() << std::endl;
				break ;
			}
			std::cout << i << ": " << toby;
		}
		std::cout << toby << std::endl;
		std::cout << *pass << std::endl;
		try
		{
			toby.signForm(*pass);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		try
		{
			toby.executeForm(*pass);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "\nIncreasing Bureaucrat's grade until it should match desired execGrade, then trying to execute\n";
		times = toby.getGrade() - pass->getGradeToExec();
		for (int i = 1; i <= times; i++)
		{
			try
			{
				toby.incrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cout << "Error: " << e.what() << std::endl;
				break ;
			}
			std::cout << i << ": " << toby;
		}
		std::cout << toby << std::endl;
		std::cout << *pass << std::endl;
		try
		{
			toby.executeForm(*pass);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		delete pass;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}