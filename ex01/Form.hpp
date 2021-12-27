/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:36:50 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/27 15:10:05 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include <string>
# include "Bureaucrat.hpp"

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
				return "The grade is too low";
			}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The grade is too high";
			}
		};

		const std::string	&getName(void) const;
		const bool			&isSigned(void) const;
		const int			&getMinGradeToSign(void) const;
		const int			&getMinGradeToExec(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);

	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_min_grade_to_sign;
		const int			_min_grade_to_exec;
};

std::ostream	&operator<<(std::ostream &os, const Form &rhs);

#endif
