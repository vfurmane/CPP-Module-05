/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:48 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/31 15:46:17 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const std::string &name, const std::string &target);
		RobotomyRequestForm(const std::string &name, int min_grade_to_sign, int min_grade_to_exec, const std::string &target);

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

		static Form	*build(const std::string &target);

	private:
		const std::string	_target;
		void				_executeConcrete() const;
};

#endif
