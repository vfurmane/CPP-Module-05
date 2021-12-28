/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:48 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/28 11:11:56 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &obj);

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
};

#endif
