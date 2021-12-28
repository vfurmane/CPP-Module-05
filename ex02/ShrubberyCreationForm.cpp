/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:57:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/28 11:08:47 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return *this;
}
