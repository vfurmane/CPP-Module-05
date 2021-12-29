/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:57:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 09:58:38 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(), _target("target")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj), _target("target")
{
	*this = obj;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name, const std::string &target) : Form(name), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target) : Form(name, min_grade_to_sign, min_grade_to_exec), _target(target)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return *this;
}

void	ShrubberyCreationForm::_executeConcrete(const Bureaucrat &executor) const
{
	(void)executor; /* ===== DELETE ===== */
}
