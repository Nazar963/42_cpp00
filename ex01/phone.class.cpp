/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:17:04 by naal-jen          #+#    #+#             */
/*   Updated: 2023/06/01 22:48:08 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.class.hpp"
#include <string>
#include <cctype>
#include <cstdio>

void	PhoneBook::Add(int i)
{
	std::cout << "What is your first name?" << std::endl;
	if (!this->contacts[i].first_name.empty())
		this->contacts[i].first_name.clear();
	while (this->contacts[i].first_name.empty())
	{
		std::getline(std::cin, this->contacts[i].first_name);
		if (std::cin.eof())
			exit(1);
		else
		{
			while(!this->contacts[i].first_name.empty() && std::isspace(this->contacts[i].first_name[0]))
			{
				this->contacts[i].first_name.erase(this->contacts[i].first_name.begin());
			}
			while(!this->contacts[i].first_name.empty() && std::isspace(this->contacts[i].first_name[this->contacts[i].first_name.size() - 1]))
			{
				this->contacts[i].first_name.resize(this->contacts[i].first_name.size() - 1);
			}
			if (this->contacts[i].first_name.empty()) {
				std::cout << "Invalid input, please try again." << std::endl;
			}
		}
	}

	std::cout << "What is you'r last_name?" << std::endl;
	if (!this->contacts[i].last_name.empty())
		this->contacts[i].last_name.clear();
	while (this->contacts[i].last_name.empty())
	{
		std::getline(std::cin, this->contacts[i].last_name);
		if (std::cin.eof())
			exit(1);
		else
		{
			while(!this->contacts[i].last_name.empty() && std::isspace(this->contacts[i].last_name[0]))
			{
				this->contacts[i].last_name.erase(this->contacts[i].last_name.begin());
			}
			while(!this->contacts[i].last_name.empty() && std::isspace(this->contacts[i].last_name[this->contacts[i].last_name.size() - 1]))
			{
				this->contacts[i].last_name.resize(this->contacts[i].last_name.size() - 1);
			}
			if (this->contacts[i].last_name.empty()) {
				std::cout << "Invalid input, please try again." << std::endl;
			}
		}
	}

	std::cout << "What is you'r nickname?" << std::endl;
	if (!this->contacts[i].nickname.empty())
		this->contacts[i].nickname.clear();
	while (this->contacts[i].nickname.empty())
	{
		std::getline(std::cin, this->contacts[i].nickname);
		if (std::cin.eof())
			exit(1);
		else
		{
			while(!this->contacts[i].nickname.empty() && std::isspace(this->contacts[i].nickname[0]))
			{
				this->contacts[i].nickname.erase(this->contacts[i].nickname.begin());
			}
			while(!this->contacts[i].nickname.empty() && std::isspace(this->contacts[i].nickname[this->contacts[i].nickname.size() - 1]))
			{
				this->contacts[i].nickname.resize(this->contacts[i].nickname.size() - 1);
			}
			if (this->contacts[i].nickname.empty()) {
				std::cout << "Invalid input, please try again." << std::endl;
			}
		}
	}

	std::cout << "What is you'r phone_number?" << std::endl;
	if (!this->contacts[i].phone_number.empty())
		this->contacts[i].phone_number.clear();
	while (this->contacts[i].phone_number.empty())
	{
		std::getline(std::cin, this->contacts[i].phone_number);
		if (std::cin.eof())
			exit(1);
		else
		{
			while(!this->contacts[i].phone_number.empty() && std::isspace(this->contacts[i].phone_number[0]))
			{
				this->contacts[i].phone_number.erase(this->contacts[i].phone_number.begin());
			}
			while(!this->contacts[i].phone_number.empty() && std::isspace(this->contacts[i].phone_number[this->contacts[i].phone_number.size() - 1]))
			{
				this->contacts[i].phone_number.resize(this->contacts[i].phone_number.size() - 1);
			}
			if (this->contacts[i].phone_number.empty()) {
				std::cout << "Invalid input, please try again." << std::endl;
			}
		}
	}

	std::cout << "What is you'r darkest_secret?" << std::endl;
	if (!this->contacts[i].darkest_secret.empty())
		this->contacts[i].darkest_secret.clear();
	while (this->contacts[i].darkest_secret.empty())
	{
		std::getline(std::cin, this->contacts[i].darkest_secret);
		if (std::cin.eof())
			exit(1);
		else
		{
			while(!this->contacts[i].darkest_secret.empty() && std::isspace(this->contacts[i].darkest_secret[0]))
			{
				this->contacts[i].darkest_secret.erase(this->contacts[i].darkest_secret.begin());
			}
			while(!this->contacts[i].darkest_secret.empty() && std::isspace(this->contacts[i].darkest_secret[this->contacts[i].darkest_secret.size() - 1]))
			{
				this->contacts[i].darkest_secret.resize(this->contacts[i].darkest_secret.size() - 1);
			}
			if (this->contacts[i].darkest_secret.empty()) {
				std::cout << "Invalid input, please try again." << std::endl;
			}
		}
	}

	this->contacts[i].first_name_mod = this->contacts[i].first_name;
	this->contacts[i].last_name_mod = this->contacts[i].last_name;
	this->contacts[i].nickname_mod = this->contacts[i].nickname;
	this->contacts[i].phone_number_mod = this->contacts[i].phone_number;
	this->contacts[i].darkest_secret_mod = this->contacts[i].darkest_secret;


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
		std::cout << j << "| " << this->contacts[j].first_name  <<"| " <<
		this->contacts[j].last_name << "| " << this->contacts[j].nickname << "| " << std::endl;

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