/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:04:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 14:41:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs; /* ===== DELETE ===== */
	return *this;
}

static int	ft_strarr(const std::string	arr[], const std::string &str)
{
	for (int i = 0; i< 4; i++)
	{
		if (str.compare(arr[i]) == 0)
			return (i);
	}
	return (-1);
}

Form	*Intern::makeForm(const std::string &form_name, const std::string &form_target) const
{
	const std::string	forms_name[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	forms_type	forms[3] = {&ShrubberyCreationForm::build, &RobotomyRequestForm::build, &PresidentialPardonForm::build};
	int					index = ft_strarr(forms_name, form_name);
	if (index < 0)
	{
		std::cerr << "The requested form does not exist" << std::endl;
		return NULL;
	}
	Form *form = forms[index](form_target);
	std::cout << "Intern creates " << *form << std::endl;
	return form;
}
