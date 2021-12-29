/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 11:58:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

void	ft_trycatch_alloc_form(int grade)
{
	try
	{
		ShrubberyCreationForm	form("Form", grade, grade, "Target");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ft_sign_form(int bureaucrat_grade, int min_grade)
{
	Bureaucrat				bureaucrat("Bureaucrat", bureaucrat_grade);
	ShrubberyCreationForm	form("Form", min_grade, min_grade, "Target");
	
	bureaucrat.signForm(form);
}

void	ft_exec_form(bool sign, int bureaucrat_grade)
{
	Bureaucrat				bureaucrat("Bureaucrat", bureaucrat_grade);
	ShrubberyCreationForm	form("Form", 150, 42, "Target");
	
	if (sign)
		bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main(void)
{
	Bureaucrat	micheal("Micheal Scott", 1);

	{
		ShrubberyCreationForm	form("Paperwork", 21, 42, "Dwight");
		std::cout << form << std::endl;
		form.beSigned(micheal);
		std::cout << form << std::endl;
		form.execute(micheal);
	}
	{
		RobotomyRequestForm	form("Paperwork", 21, 42, "Dwight");
		std::cout << form << std::endl;
		form.beSigned(micheal);
		std::cout << form << std::endl;
		form.execute(micheal);
	}
	{
		PresidentialPardonForm form("Paperwork", 21, 42, "Dwight");
		std::cout << form << std::endl;
		form.beSigned(micheal);
		std::cout << form << std::endl;
		form.execute(micheal);
	}

	ft_trycatch_alloc_form(1);
	ft_trycatch_alloc_form(150);
	ft_trycatch_alloc_form(0);
	ft_trycatch_alloc_form(151);

	ft_sign_form(1, 150);
	ft_sign_form(42, 42);
	ft_sign_form(150, 1);

	ft_exec_form(false, 1);
	ft_exec_form(true, 150);
	ft_exec_form(true, 1);
	return 0;
}
