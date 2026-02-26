/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:30:11 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 15:53:12 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
class PhoneBook
{
private:
	int			nb_contacts;
	Contact		contacts[8];
public:
	PhoneBook();
	void addcontact(std::string fn, std::string ln, std::string nn, std::string pn, std::string s);
	void print_contacts() const;
	void print_contact(int index) const;
	void print_contact_detailed(int index) const;
	int	get_nb_contact() const;
};
#endif
