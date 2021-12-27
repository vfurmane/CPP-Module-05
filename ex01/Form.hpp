/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:36:50 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/27 13:45:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Form
{
	public:
		Form(void);
		~Form(void);
		Form(const Form &obj);
		Form(const std::string &name);
		Form(const std::string &name, int min_grade_to_sign, int min_grade_to_exec);

		Form				&operator=(const Form &rhs);

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The grade is too low (min 150)";
			}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The grade is too high (max 1)";
			}
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_min_grade_to_sign;
		const int			_min_grade_to_exec;
};

#endif
