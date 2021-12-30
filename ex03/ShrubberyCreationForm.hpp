/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:43 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 10:40:03 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const std::string &name, const std::string &target);
		ShrubberyCreationForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

	private:
		const std::string	_target;
		void				_executeConcrete(void) const;
};

#endif
