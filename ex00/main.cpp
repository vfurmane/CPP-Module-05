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

void	ft_trycatch(const std::string &name, int grade)
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

int	main(void)
{
	ft_trycatch("John Doe", 3);
	ft_trycatch("God", 0);
	ft_trycatch("Doggo", 151);
	return 0;
}
