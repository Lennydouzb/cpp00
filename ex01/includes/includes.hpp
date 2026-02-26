/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:32:02 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 15:16:10 by ldesboui         ###   ########.fr       */
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
# include "Contact.hpp"
# include "PhoneBook.hpp"
std::string	truncate(std::string s);
int		is_numeric(std::string s);
#endif
