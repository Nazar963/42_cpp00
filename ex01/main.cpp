/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:49:20 by naal-jen          #+#    #+#             */
/*   Updated: 2023/06/01 23:06:17 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.class.hpp"

int	main(void)
{
	int			x = 0;
	int			i = 0;
	int			j = 0;
	int			index = 0;
	std::string	input;
	PhoneBook	phone;

	while (1)
	{
		std::cout << "options: 1.ADD 2.SEARCH 3. EXIT" << std::endl;
		if (!input.empty())
			input.clear();
		while (input.empty())
		{
			std::getline(std::cin, input);
			if (x == 1)
				x++;
			else if (std::cin.eof())
				exit(1);
			else
			{
				while(!input.empty() && std::isspace(input[0]))
				{
					input.erase(input.begin());
				}
				while(!input.empty() && std::isspace(input[input.size() - 1]))
				{
					input.resize(input.size() - 1);
				}
				if (input.empty()) {
					std::cout << "Invalid input, please try again." << std::endl;
				}
			}
		}
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
			x = 1;
		}
		else if (input == "EXIT")
			phone.Exit();
	}
}