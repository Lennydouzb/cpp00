/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:37:11 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 18:07:34 by ldesboui         ###   ########.fr       */
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
std::string Contact::get_fn ()const
{
	return (this->first_name);
}
std::string Contact::get_ln ()const
{
	return (this->last_name);
}
std::string Contact::get_nn ()const
{
	return (this->nickname);
}
std::string Contact::get_pn ()const
{
	return (this->phone_number);
}
std::string Contact::get_s ()const
{
	return (this->secret);
}
void Contact::set_fn (std::string fn)
{
	this->first_name = fn;
}
void Contact::set_ln (std::string ln)
{
	this->last_name =ln;
}
void Contact::set_nn (std::string nn)
{
	this->nickname = nn;
}
void Contact::set_pn (std::string pn)
{
	this->phone_number = pn;
}
void Contact::set_s (std::string s)
{
	this->secret = s;
}
