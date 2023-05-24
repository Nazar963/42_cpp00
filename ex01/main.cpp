/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:49:20 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/24 19:39:55 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.class.hpp"

int	main(int ac, char **av)
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
			if (i > 8)
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
			std::cout << index << " | " << phone.contacts[index].first_name  <<" | " << phone.contacts[index].last_name << " | " << phone.contacts[index].nickname << std::endl;
		}
		else if (input == "EXIT")
			phone.Exit();
	}
}