/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:16:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 13:28:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(int ac, char **av)
{
	int	i;
	int	k;

	if (ac < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	else
	{
		i = 1;
		while (av[i])
		{
			k = 0;
			while (av[i][k])
			{
				cout << static_cast<char>(toupper(av[i][k]));
				++k;
			}
			++i;
		}
		cout << '\n';
	}
	return (0);
}
