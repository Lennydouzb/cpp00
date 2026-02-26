/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:16:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 17:43:44 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

int	main(int ac, char **av)
{
	std::string str_av;
	int			i;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			str_av = av[i];
			std::transform(str_av.begin(), str_av.end(), str_av.begin(), ::toupper);
			std::cout << str_av;
			++i;
		}
		std::cout << std::endl;
	}
	return (0);
}
