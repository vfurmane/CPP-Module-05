/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:04:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/30 16:30:55 by vfurmane         ###   ########.fr       */
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

Form	*Intern::makeForm(const std::string &form_name, const std::string &form_target) const
{
	(void)form_name; /* ===== DELETE ===== */
	(void)form_target; /* ===== DELETE ===== */
	return NULL;
}
