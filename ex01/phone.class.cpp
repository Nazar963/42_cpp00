/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:17:04 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/24 19:26:43 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.class.hpp"

void	PhoneBook::Add(int i)
{
	std::cout << "What is you'r first_name?" << std::endl;
	std::cin >> this->contacts[i].first_name;
	// if (this->contacts[i].first_name.empty() == 0)
	// {
	// 	std::cout << "error" << std::endl;
	// 	while (this->contacts[i].first_name.length() == 0)
	// 	{
	// 		std::cout << "error" << std::endl;
	// 		std::cout << "What is you'r first_name?" << std::endl;
	// 		std::cin >> this->contacts[i].first_name;
	// 	}
	// }
	// else
	// {
	// 	int j = 0;
	// 	for (j = 0; j < this->contacts[i].first_name.length(); i++)
	// 	{
	// 		if (this->contacts[i].first_name[j] != ' ')
	// 			break ;
	// 	}
	// 	if (j > this->contacts[i].first_name.length())
	// 	{
	// 		while (this->contacts[i].first_name.length() == 0)
	// 		{
	// 			std::cout << "error" << std::endl;
	// 			std::cout << "What is you'r first_name?" << std::endl;
	// 			std::cin >> this->contacts[i].first_name;
	// 		}
	// 	}

	// }
	std::cout << "What is you'r last_name?" << std::endl;
	std::cin >> this->contacts[i].last_name;
	// if (this->contacts[i].last_name.length() == 0)
	// {
	// 	while (this->contacts[i].last_name.length() == 0)
	// 	{
	// 		std::cout << "error" << std::endl;
	// 		std::cout << "What is you'r last_name?" << std::endl;
	// 		std::cin >> this->contacts[i].last_name;
	// 	}
	// }
	// else
	// {
	// 	int j = 0;
	// 	for (j = 0; j <= this->contacts[i].last_name.length(); i++)
	// 	{
	// 		if (this->contacts[i].last_name[j] != ' ')
	// 			break ;
	// 	}
	// 	if (j > this->contacts[i].last_name.length())
	// 	{
	// 		while (this->contacts[i].last_name.length() == 0)
	// 		{
	// 			std::cout << "error" << std::endl;
	// 			std::cout << "What is you'r last_name?" << std::endl;
	// 			std::cin >> this->contacts[i].last_name;
	// 		}
	// 	}

	// }
	std::cout << "What is you'r nickname?" << std::endl;
	std::cin >> this->contacts[i].nickname;
	// if (this->contacts[i].nickname.length() == 0)
	// {
	// 	while (this->contacts[i].nickname.length() == 0)
	// 	{
	// 		std::cout << "error" << std::endl;
	// 		std::cout << "What is you'r nickname?" << std::endl;
	// 		std::cin >> this->contacts[i].nickname;
	// 	}
	// }
	// else
	// {
	// 	int j = 0;
	// 	for (j = 0; j <= this->contacts[i].nickname.length(); i++)
	// 	{
	// 		if (this->contacts[i].nickname[j] != ' ')
	// 			break ;
	// 	}
	// 	if (j > this->contacts[i].nickname.length())
	// 	{
	// 		while (this->contacts[i].nickname.length() == 0)
	// 		{
	// 			std::cout << "error" << std::endl;
	// 			std::cout << "What is you'r nickname?" << std::endl;
	// 			std::cin >> this->contacts[i].nickname;
	// 		}
	// 	}

	// }
	std::cout << "What is you'r phone_number?" << std::endl;
	std::cin >> this->contacts[i].phone_number;
	// 	if (this->contacts[i].phone_number.length() == 0)
	// {
	// 	while (this->contacts[i].phone_number.length() == 0)
	// 	{
	// 		std::cout << "error" << std::endl;
	// 		std::cout << "What is you'r phone_number?" << std::endl;
	// 		std::cin >> this->contacts[i].phone_number;
	// 	}
	// }
	// else
	// {
	// 	int j = 0;
	// 	for (j = 0; j <= this->contacts[i].phone_number.length(); i++)
	// 	{
	// 		if (this->contacts[i].phone_number[j] != ' ')
	// 			break ;
	// 	}
	// 	if (j > this->contacts[i].phone_number.length())
	// 	{
	// 		while (this->contacts[i].phone_number.length() == 0)
	// 		{
	// 			std::cout << "error" << std::endl;
	// 			std::cout << "What is you'r phone_number?" << std::endl;
	// 			std::cin >> this->contacts[i].phone_number;
	// 		}
	// 	}

	// }
	std::cout << "What is you'r darkest_secret?" << std::endl;
	std::cin >> this->contacts[i].darkest_secret;
	// if (this->contacts[i].darkest_secret.length() == 0)
	// {
	// 	while (this->contacts[i].darkest_secret.length() == 0)
	// 	{
	// 		std::cout << "error" << std::endl;
	// 		std::cout << "What is you'r darkest_secret?" << std::endl;
	// 		std::cin >> this->contacts[i].darkest_secret;
	// 	}
	// }
	// else
	// {
	// 	int j = 0;
	// 	for (j = 0; j <= this->contacts[i].darkest_secret.length(); i++)
	// 	{
	// 		if (this->contacts[i].darkest_secret[j] != ' ')
	// 			break ;
	// 	}
	// 	if (j > this->contacts[i].darkest_secret.length())
	// 	{
	// 		while (this->contacts[i].darkest_secret.length() == 0)
	// 		{
	// 			std::cout << "error" << std::endl;
	// 			std::cout << "What is you'r darkest_secret?" << std::endl;
	// 			std::cin >> this->contacts[i].darkest_secret;
	// 		}
	// 	}

	// }

	if (this->contacts[i].first_name.length() > 10)
	{
		this->contacts[i].first_name.resize(10);
		this->contacts[i].first_name[9] = '.';
	}
	if (this->contacts[i].last_name.length() > 10)
	{
		this->contacts[i].last_name.resize(10);
		this->contacts[i].last_name[9] = '.';
	}
	if (this->contacts[i].nickname.length() > 10)
	{
		this->contacts[i].nickname.resize(10);
		this->contacts[i].nickname[9] = '.';
	}
	if (this->contacts[i].phone_number.length() > 10)
	{
		this->contacts[i].phone_number.resize(10);
		this->contacts[i].phone_number[9] = '.';
	}
	if (this->contacts[i].darkest_secret.length() > 10)
	{
		this->contacts[i].darkest_secret.resize(10);
		this->contacts[i].darkest_secret[9] = '.';
	}

	return;
}

void	PhoneBook::Search(int i)
{

	for(int j = 0; j < i; j++)
		std::cout << j << " | " << this->contacts[j].first_name  <<" | " << this->contacts[j].last_name << " | " << this->contacts[j].nickname << std::endl;

	return;
}

void	PhoneBook::Exit(void)
{
	exit(1);
}

PhoneBook::PhoneBook()
{
    // Constructor - called when a PhoneBook object is created
}

PhoneBook::~PhoneBook()
{
    // Destructor - called when a PhoneBook object is destroyed
}

Contact::Contact()
{
    // Constructor - called when a PhoneBook object is created
}

Contact::~Contact()
{
    // Destructor - called when a PhoneBook object is destroyed
}