/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:32 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/28 11:12:47 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
	*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return *this;
}
