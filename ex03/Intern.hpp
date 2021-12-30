/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:05:13 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/30 14:28:29 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &obj);

		Intern	&operator=(const Intern &rhs);
};

#endif
