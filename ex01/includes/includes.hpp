/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:32:02 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/19 11:56:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
# define INCLUDES_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <algorithm>
# include <cctype>
# include <cstdlib>
using namespace std;
# include "Contact.hpp"
# include "PhoneBook.hpp"
string	truncate(string s);
int		is_numeric(string s);
#endif
