/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:51:15 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/28 15:09:43 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
	for (size_t i = 0; i < 10; i++)
	{
		vec.push_back(i + 1);
		std::cout << "value of vector in position "<< i << " -> " << vec.at(i) << std::endl;
	}
    try {
        std::vector<int>::iterator it = easyfind(vec, 9);
        std::cout << "Encontrado: " << *it << std::endl;
		it = easyfind(vec, 15);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
	return(0);
}