/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:32 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 15:44:52 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form(), _target("target")
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj), _target("target")
{
	*this = obj;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(), _target(target)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name, const std::string &target) : Form(name), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target) : Form(name, min_grade_to_sign, min_grade_to_exec), _target(target)
{
}

Form	*PresidentialPardonForm::build(const std::string &target)
{
	return new PresidentialPardonForm("presidential pardon", target);
}

void	PresidentialPardonForm::_executeConcrete() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
