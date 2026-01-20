/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:30:11 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 14:38:43 by ldesboui         ###   ########.fr       */
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
	void	addcontact(string fn, string ln, string nn, string pn, string s);
};
#endif
