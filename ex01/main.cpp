/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/27 14:49:21 by vfurmane         ###   ########.fr       */
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

int	main(void)
{
	Form	form("Paperwork", 21, 42);
	std::cout << form << std::endl;

	ft_trycatch_alloc_form("Form", 1);
	ft_trycatch_alloc_form("Form", 150);
	ft_trycatch_alloc_form("Form", 0);
	ft_trycatch_alloc_form("Form", 151);
	return 0;
}
