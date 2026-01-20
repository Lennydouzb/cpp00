/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:16:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 15:10:51 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/includes.hpp"
#include <cstring>

int	main(void)
{
	PhoneBook	aPhoneBook;
	string		line;
	int			ok = 1;
	string		fn;
	string		ln;
	string		pn;
	string		s;
	string		nn;
	while (ok == 1)
	{
		cout << "Type a command:";
		getline(cin, line);
		if (line.compare("ADD") == 0)
		{
			cout << "First Name:";
			getline(cin, fn);
			cout << "Last Name:";
			getline(cin, ln);	
			cout << "Phone Number:";
			getline(cin, pn);
			cout << "Nickname:";
			getline(cin, nn);
			cout << "Darkest secret:";
			getline(cin, s);
			aPhoneBook.addcontact(fn, ln, nn, pn, s);
		}
		if (line.compare("EXIT"))
		{
			return (0);
		}
		if (line.compare("SEARCH"))
		{

		}
	}
	return (0);
}
