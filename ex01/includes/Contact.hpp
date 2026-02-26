/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:03:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 15:19:28 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "includes.hpp"
class Contact
{
private:
	int			number;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	static int	lastnumber;
public:
	Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string s);
	Contact();
	std::string get_fn	()const;
	std::string get_ln	()const;
	std::string get_nn	()const;
	std::string get_pn	()const;
	std::string get_s	()const;
	void set_fn (std::string fn);
	void set_ln (std::string ln);
	void set_nn (std::string nn);
	void set_pn (std::string pn);
	void set_s (std::string s);
};
#endif
