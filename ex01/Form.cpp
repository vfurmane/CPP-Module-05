/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:37:33 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/27 13:44:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(), _is_signed(false), _min_grade_to_sign(150), _min_grade_to_exec(150)
{
}

Form::~Form(void)
{
}

Form::Form(const Form &obj) : _name(), _is_signed(false), _min_grade_to_sign(150), _min_grade_to_exec(150)
{
	*this = obj;
}

Form::Form(const std::string &name) : _name(name), _is_signed(false), _min_grade_to_sign(150), _min_grade_to_exec(150)
{
}

Form::Form(const std::string &name, int min_grade_to_sign, int min_grade_to_exec) : _name(name), _is_signed(false), _min_grade_to_sign(min_grade_to_sign), _min_grade_to_exec(min_grade_to_exec)
{
	if (min_grade_to_sign < 1 || min_grade_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (min_grade_to_sign > 150 || min_grade_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form	&Form::operator=(const Form &rhs)
{
	(void)rhs;
	return *this;
}
