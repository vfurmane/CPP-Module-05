/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:59:32 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/23 14:26:03 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat(const std::string &name);
		Bureaucrat(int _grade);
		Bureaucrat(const std::string &name, int _grade);

		Bureaucrat	&operator=(const Bureaucrat &rhs);

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

		const std::string	&getName(void) const;
		int					getGrade(void) const;

	private:
		const std::string	_name;
		int					_grade;
};

#endif
