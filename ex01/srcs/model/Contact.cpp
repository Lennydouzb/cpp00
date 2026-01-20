/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:37:11 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 17:18:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.hpp"

int Contact::lastnumber = 0;
Contact::Contact()
{
	Contact::lastnumber += 1;
	this->number = Contact::lastnumber;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->secret = "";
}
string Contact::get_fn ()const
{
	return (this->first_name);
}
string Contact::get_ln ()const
{
	return (this->last_name);
}
string Contact::get_nn ()const
{
	return (this->nickname);
}
string Contact::get_pn ()const
{
	return (this->phone_number);
}
string Contact::get_s ()const
{
	return (this->secret);
}
void Contact::set_fn (string fn)
{
	this->first_name = fn;
}
void Contact::set_ln (string ln)
{
	this->last_name =ln;
}
void Contact::set_nn (string nn)
{
	this->nickname = nn;
}
void Contact::set_pn (string pn)
{
	this->phone_number = pn;
}
void Contact::set_s (string s)
{
	this->secret = s;
}

