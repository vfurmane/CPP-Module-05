/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 15:14:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	ft_trycatch_alloc_bureaucrat(const std::string &name, int grade)
{
	try
	{
		Bureaucrat	bureaucrat(name, grade);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ft_trycatch_crement_bureaucrat(int grade, int crement)
{
	try
	{
		Bureaucrat	bureaucrat("M. Bureaucrat", grade);
		if (crement == -1)
			bureaucrat.decrement();
		else if (crement == 1)
			bureaucrat.increment();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	Bureaucrat	micheal("Micheal Scott", 1);
	std::cout << micheal << std::endl;

	ft_trycatch_alloc_bureaucrat("John Doe", 3);
	ft_trycatch_alloc_bureaucrat("God", 0);
	ft_trycatch_alloc_bureaucrat("Doggo", 151);

	std::cout << std::endl;

	ft_trycatch_crement_bureaucrat(1, 1);
	ft_trycatch_crement_bureaucrat(150, -1);
	ft_trycatch_crement_bureaucrat(1, -1);
	ft_trycatch_crement_bureaucrat(150, 1);
	return 0;
}
