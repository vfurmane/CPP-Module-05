/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 15:47:24 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Intern	ryan;
	{
		Form	*form = ryan.makeForm("shrubbery creation", "Bender");
		delete form;
	}
	{
		Form	*form = ryan.makeForm("robotomy request", "Bender");
		delete form;
	}
	{
		Form	*form = ryan.makeForm("presidential pardon", "Bender");
		delete form;
	}
	return 0;
}
