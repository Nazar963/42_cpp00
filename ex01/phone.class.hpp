/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:07:23 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/24 15:59:13 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_HPP
#define PHONE_CLASS_HPP

#include <iostream>
#include <cstdlib>

class	Contact
{
	public:

		Contact();
		~Contact();

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

class	PhoneBook
{
	public:

		PhoneBook();
		~PhoneBook();

		Contact contacts[8];
		void	Add(int i);
		void	Search(int i);
		void	Exit(void);
};

#endif