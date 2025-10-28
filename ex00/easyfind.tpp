/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:57:14 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/28 14:54:37 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<stdio.h>
template <typename T>
typename T::iterator easyfind(T& container , int to_search)
{
	typename T::iterator i = std::find(container.begin(),container.end(),to_search);
	if (i == container.end())
	{
		throw ExceptionNotFound();
	}
	return i;
	
}