/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:31:26 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 15:04:47 by ldesboui         ###   ########.fr       */
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
	}
