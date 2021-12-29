/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:54 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/29 10:09:59 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const std::string &name, const std::string &target);
		PresidentialPardonForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target);

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

	private:
		const std::string	_target;
		void				_executeConcrete() const;
};

#endif
