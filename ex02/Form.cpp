/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:37:33 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 10:49:48 by vfurmane         ###   ########.fr       */
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

const std::string	&Form::getName(void) const
{
	return this->_name;
}

const bool	&Form::isSigned(void) const
{
	return this->_is_signed;
}

const int	&Form::getMinGradeToSign(void) const
{
	return this->_min_grade_to_sign;
}

const int	&Form::getMinGradeToExec(void) const
{
	return this->_min_grade_to_exec;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_min_grade_to_sign)
		throw Form::GradeTooLowException();
	this->_is_signed = true;
}

void	Form::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_min_grade_to_exec)
		throw Form::GradeTooLowException();
	if (!this->_is_signed)
		throw Form::NotSigned();
	this->_executeConcrete();
}

std::ostream	&operator<<(std::ostream &os, const Form &rhs)
{
	os << rhs.getName() << ", form is " << (rhs.isSigned() ? "" : "not ") << "signed (sign: " << rhs.getMinGradeToSign() << ", exec: " << rhs.getMinGradeToExec() << ")";
	return os;
}
