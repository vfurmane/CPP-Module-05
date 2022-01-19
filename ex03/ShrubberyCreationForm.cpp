/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:57:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 15:44:28 by vfurmane         ###   ########.fr       */
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

Form	*ShrubberyCreationForm::build(const std::string &target)
{
	return new ShrubberyCreationForm("shrubbery creation", target);
}

void	ShrubberyCreationForm::_executeConcrete(void) const
{
	std::ofstream	ofs((this->_target + "_shrubbery").c_str());
	if (!ofs)
	{
		std::cerr << "An error occured while opening the file..." << std::endl;
		return ;
	}
	ofs << "            ,@@@@@@@," << std::endl;
	ofs << "    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	ofs << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	ofs << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	ofs << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	ofs << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	ofs << "    |o|        | |         | |" << std::endl;
	ofs << "    |.|        | |         | |" << std::endl;
	ofs << " \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	ofs.close();
}
