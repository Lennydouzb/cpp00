/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:43:54 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/21 14:50:15 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/includes.hpp"

string	truncate(string s)
{
	if (s.length() > 10)
	{
		return s.substr(0, 9) + '.';
	}
	else if (s.length() == 10)
		return s;
	else
	{
		while (s.length() < 10)
		{
			s = ' ' + s;
		}
	}
	return s;
}

int	is_numeric(string s)
{
	int	i = 0;
	while (s[i])
	{
		if (!isdigit(static_cast<unsigned char>(s[0])))
			return (0);
		++i;
	}
	return (1);
}
