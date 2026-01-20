/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:03:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/01/20 14:27:59 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "includes.hpp"
class Contact
{
private:
	string first_name;
	string last_name;
	string nickname;
	string phone_number;
	string secret;
public:
	Contact(string fn, string ln, string nn, string pn, string s);
	Contact();
	string get_fn	()const;
	string get_ln	()const;
	string get_nn	()const;
	string get_pn	()const;
	string get_s	()const;
	void set_fn (string fn);
	void set_ln (string ln);
	void set_nn (string nn);
	void set_pn (string pn);
	void set_s (string s);

};
#endif
