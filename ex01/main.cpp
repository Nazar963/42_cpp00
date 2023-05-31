/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:49:20 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/31 17:00:22 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.class.hpp"

int	main(void)
{
	int			i = 0;
	int			j = 0;
	int			index = 0;
	std::string	input;
	PhoneBook	phone;

	while (1)
	{
		std::cout << "you have three options: 1.ADD 2.SEARCH 3. EXIT" << std::endl;
		std::cout << "choose carfully" << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			if (i > 7)
				i = 0;
			phone.Add(i);
			i++;
			j++;
		}
		else if (input == "SEARCH")
		{
			if (j > 7)
				j = 8;
			phone.Search(j);
			std::cout << "index ?" << std::endl;
			std::cin >> index;
			if (index < 0 || index > 7)
			{
				while (index < 0 || index > 7)
				{
					std::cout << "error: index" << std::endl;
					std::cout << "index ?" << std::endl;
					std::cin >> index;
				}
			}
			std::cout << "First Name is" << std::endl;
			std::cout << phone.contacts[index].first_name_mod << std::endl;
			std::cout << "Last Name is" << std::endl;
			std::cout << phone.contacts[index].last_name_mod << std::endl;
			std::cout << "Nickname is" << std::endl;
			std::cout << phone.contacts[index].nickname_mod << std::endl;
			std::cout << "Phone number is" << std::endl;
			std::cout << phone.contacts[index].phone_number_mod << std::endl;
			std::cout << "Darkest secret is" << std::endl;
			std::cout << phone.contacts[index].darkest_secret_mod << std::endl;
		}
		else if (input == "EXIT")
			phone.Exit();
	}
}