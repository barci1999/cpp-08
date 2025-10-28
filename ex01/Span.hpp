/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:54:33 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/28 17:18:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Reset


#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include<iostream>
# include<algorithm>


# define RESET   "\033[0m"

// Colores de texto
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

class Span
{
private:
	std::vector<int> _vec;
	unsigned int _size;
	
public:
	Span();
	Span(unsigned int size);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();
	class ExceptionFullVector : public std::exception
	{
		public:
			const char * what() const throw(){
				return("\033[31mError: the vector is full\033[0m");
			}
	};
	class ExceptionEmptyVector : public std::exception
	{
		public:
			const char * what() const throw(){
				return("\033[31mError: the vector is empty\033[0m");
			}
	};
	class ExceptionInvalidNbrElements : public std::exception
	{
		public:
			const char * what() const throw(){
				return("\033[31mError: invalid number of elements in the vector\033[0m");
			}
	};
	void addNumber(int nbr);
	int shortestSpan() const ;
	int longestSpan() const ;
};

#endif