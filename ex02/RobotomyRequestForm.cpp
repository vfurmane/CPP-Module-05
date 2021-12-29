/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:28 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 09:58:35 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form(), _target("target")
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj), _target("target")
{
	*this = obj;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name, const std::string &target) : Form(name), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target) : Form(name, min_grade_to_sign, min_grade_to_exec), _target(target)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return *this;
}

void	RobotomyRequestForm::_executeConcrete(const Bureaucrat &executor) const
{
	(void)executor; /* ===== DELETE ===== */
}
