/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:16:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/19 11:57:58 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/includes.hpp"
#include <cctype>
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
			while (fn.empty() == 1)
			{
				cout << "First Name:";
				getline(cin, fn);
			}
			while (ln.empty() == 1)
			{
				cout << "Last Name:";
				getline(cin, ln);
			}
			while (pn.empty() == 1)
			{
				cout << "Phone Number:";
				getline(cin, pn);
				if (pn.find_first_not_of("0123456789") != string::npos)
					pn = "";
			}
			while (nn.empty() == 1)
			{
				cout << "Nickname:";
				getline(cin, nn);
			}
			while (s.empty() == 1)
			{
				cout << "Darkest secret:";
				getline(cin, s);
			}
			aPhoneBook.addcontact(fn, ln, nn, pn, s);
		}
		else if (line.compare("EXIT") == 0)
		{
			return (0);
		}
		else if (line.compare("SEARCH") == 0)
		{
			aPhoneBook.print_contacts();
			cout << "Index to detail: ";
			getline(cin, line);
			if (is_numeric(line) == 1)
			{
				if (atoi(line.c_str()) < aPhoneBook.get_nb_contact()  || atoi(line.c_str()) < 0)
				{
					cout << "     index|first name| last name|  nickname|phone Nber|    secret\n";
					aPhoneBook.print_contact_detailed(std::atoi(line.c_str()));
				}
				else
				{
					cout << "Not in index\n";
				}
			}
			else
			{
				cout << "Not numeric\n";

			}
		}
	}
	return (0);
}
