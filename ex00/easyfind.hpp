/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:53:24 by mac               #+#    #+#             */
/*   Updated: 2021/08/25 16:26:01 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
int easyfind(T con, int obj)
{
	typename T::iterator it;
	for (it = con.begin(); it != con.end(); it++)
	{
		if (*it == obj)
			return (*it);
	}
	throw (std::exception());
}

#endif
