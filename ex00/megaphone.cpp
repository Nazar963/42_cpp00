/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:45:38 by naal-jen          #+#    #+#             */
/*   Updated: 2023/05/24 12:45:41 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = -1;
	int	j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[++j])
	{
		i = -1;
		while (av[j][++i])
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
				std::cout << (char)(av[j][i] - ' ');
			else
				std::cout << av[j][i];
		}
	}
	std::cout << std::endl;
}