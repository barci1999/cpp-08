/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:54:35 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/28 17:53:32 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
Span::Span()
{
	this->_size = 0;
}
Span::Span(unsigned int size)
{
	this->_size = size;
	this->_vec.reserve(size);
}
Span::Span(const Span& other)
{
	this->_size = other._size;
	this->_vec = other._vec;	
}
Span& Span::operator=(const Span& other)
{
	if (this == &other)
	{
		return*this;
	}
	
	this->_size = other._size;
	this->_vec = other._vec;
	return *this;
}
Span::~Span()
{}
void Span::addNumber(int nbr)
{
	if (this->_vec.size() >= this->_size)
	{
		throw ExceptionFullVector();
	}
	this->_vec.push_back(nbr);
	std::cout << GREEN << "Number inserted into the vector successfully" << RESET << std::endl;
	
}
int Span::longestSpan() const
{
	if (this->_vec.empty())
	{
		throw ExceptionEmptyVector();
	}
	else if (this->_vec.size() < 2)
	{
		throw ExceptionInvalidNbrElements();
	}
	int min = *std::min_element(_vec.begin(),_vec.end());
	int max = *std::max_element(_vec.begin(),_vec.end());
	return max - min;
}
int Span::shortestSpan() const
{
	if (this->_vec.empty())
	{
		throw ExceptionEmptyVector();
	}
	else if (this->_vec.size() < 2)
	{
		throw ExceptionInvalidNbrElements();
	}
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(),tmp.end());
	int min_span = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 0; i < tmp.size() - 1; i++)
	{
		int span = tmp.at(i+1) - tmp.at(i);
		if (span < min_span)
		{
			min_span = span;
		}
	}
	return(min_span);
}