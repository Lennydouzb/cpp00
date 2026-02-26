/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:16:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 18:06:58 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/includes.hpp"
#include <cctype>

void	clear_all(std::string &fn, std::string &ln, std::string &pn, std::string &s, std::string &nn, std::string &line)
{
	fn.clear();
	ln.clear();
	pn.clear();
	s.clear();
	nn.clear();
	line.clear();
}

int	main(void)
{
	PhoneBook	aPhoneBook;
	std::string		line = "";
	int				ok = 1;
	std::string		fn = "";
	std::string		ln = "";
	std::string		pn = "";
	std::string		s = "";
	std::string		nn = "";
	while (ok == 1)
	{
		clear_all(fn, ln, pn, s, nn, line);
		std::cout << "Type a command:";
		getline(std::cin, line);
		if (line.compare("ADD") == 0)
		{
			while (fn.empty() == 1)
			{
				std::cout << "First Name:";
				getline(std::cin, fn);
			}
			while (ln.empty() == 1)
			{
				std::cout << "Last Name:";
				getline(std::cin, ln);
			}
			while (pn.empty() == 1)
			{
				std::cout << "Phone Number:";
				getline(std::cin, pn);
				if (pn.find_first_not_of("0123456789") != std::string::npos)
					pn = "";
			}
			while (nn.empty() == 1)
			{
				std::cout << "Nickname:";
				getline(std::cin, nn);
			}
			while (s.empty() == 1)
			{
				std::cout << "Darkest secret:";
				getline(std::cin, s);
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
			std::cout << "Index to detail: ";
			getline(std::cin, line);
			while (line.empty() == 1)
			{
				std::cout << "Index to detail: ";
				getline(std::cin, line);
			}
			if (is_numeric(line) == 1)
			{
				if (atoi(line.c_str()) < aPhoneBook.get_nb_contact()  || atoi(line.c_str()) < 0)
				{
					std::cout << "     index|first name| last name|  nickname|phone Nber|    secret\n";
					aPhoneBook.print_contact_detailed(std::atoi(line.c_str()));
				}
				else
				{
					std::cout << "Not in index\n";
				}
			}
			else
			{
				std::cout << "Not numeric\n";

			}
		}
	}
	return (0);
}
