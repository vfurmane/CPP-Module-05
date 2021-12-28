/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:28 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/28 11:12:39 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj)
{
	*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return *this;
}
