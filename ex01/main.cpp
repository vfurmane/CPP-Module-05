/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/27 15:09:19 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

void	ft_trycatch_alloc_form(const std::string &name, int grade)
{
	try
	{
		Form	form(name, grade, grade);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ft_trycatch_sign_form(int bureaucrat_grade, int min_grade)
{
	try
	{
		Bureaucrat	bureaucrat("Bureaucrat", bureaucrat_grade);
		Form		form("Form", min_grade, min_grade);
		
		form.beSigned(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	Bureaucrat	micheal("Micheal Scott", 1);
	Form	form("Paperwork", 21, 42);
	std::cout << form << std::endl;
	form.beSigned(micheal);
	std::cout << form << std::endl;

	ft_trycatch_alloc_form("Form", 1);
	ft_trycatch_alloc_form("Form", 150);
	ft_trycatch_alloc_form("Form", 0);
	ft_trycatch_alloc_form("Form", 151);

	ft_trycatch_sign_form(1, 150);
	ft_trycatch_sign_form(42, 42);
	ft_trycatch_sign_form(150, 1);
	return 0;
}
