/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:07:23 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/31 16:55:04 by naal-jen         ###   ########.fr       */
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

		std::string	first_name_mod;
		std::string	last_name_mod;
		std::string	nickname_mod;
		std::string	phone_number_mod;
		std::string	darkest_secret_mod;
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