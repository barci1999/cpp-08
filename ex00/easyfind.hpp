/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:32:11 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/28 14:55:38 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include<iostream>
# include<algorithm>
# include<iterator>
# include<stdexcept>
# include<vector>
# include<list>
template <typename T>
typename T::iterator easyfind(T& container,int value);
class ExceptionNotFound : public std::exception
{
	public:
		const char* what() const throw(){
			return("Value not found");
		}
};
#include"easyfind.tpp"
#endif