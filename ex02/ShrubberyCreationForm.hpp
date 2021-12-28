/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 10:58:43 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/28 11:04:22 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
};

#endif
