/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:31:26 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/21 14:56:43 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.hpp"

PhoneBook::PhoneBook()
{
	nb_contacts = 0;
}

void	PhoneBook::addcontact(string fn, string ln, string nn, string pn, string s)
{
	contacts[this->nb_contacts % 8].set_fn(fn);
	contacts[this->nb_contacts % 8].set_ln(ln);
	contacts[this->nb_contacts % 8].set_nn(nn);
	contacts[this->nb_contacts % 8].set_pn(pn);
	contacts[this->nb_contacts % 8].set_s(s);
	this->nb_contacts += 1;
	if (nb_contacts > 8)
	{
		nb_contacts = 8;
	}
}

void	PhoneBook::print_contacts() const
{
	int	i = 0;
	cout << "     index|first name| last name|  nickname\n";
	while (i < nb_contacts)
	{
		print_contact(i);
		++i;
	}
}

void	PhoneBook::print_contact(int index) const
{
	cout << "         " << index << "|";
	cout << truncate(this->contacts[index].get_fn()) << '|';
	cout << truncate(this->contacts[index].get_ln()) << '|';
	cout << truncate(this->contacts[index].get_nn()) << '\n';
}
void	PhoneBook::print_contact_detailed(int index) const
{
	cout << "         " << index << "|";
	cout << truncate(this->contacts[index].get_fn()) << '|';
	cout << truncate(this->contacts[index].get_ln()) << '|';
	cout << truncate(this->contacts[index].get_nn()) << '|';
	cout << truncate(this->contacts[index].get_pn()) << '|';
	cout << truncate(this->contacts[index].get_s()) << '\n';
}

int	PhoneBook::get_nb_contact() const
{
	return this->nb_contacts;
}
