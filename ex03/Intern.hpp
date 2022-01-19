/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:05:13 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 14:23:22 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

typedef Form *(*forms_type)(const std::string &target);

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &obj);

		Intern	&operator=(const Intern &rhs);

		Form	*makeForm(const std::string &form_name, const std::string &form_target) const;
};

#endif
