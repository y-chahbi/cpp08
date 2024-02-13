/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:30:59 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/13 09:40:03 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(){}
Span::Span(unsigned int N) : N(N){}
void    Span::addNumber(int add)
{
    if (vect.size() < N)
        vect.push_back(add);
    else
        throw "Max Range is Reached!";
};

Span::Span(const Span& Copy)
{
    *this = Copy;
}

Span& Span::operator=(const Span& Copy)
{
    this->N = Copy.getN();

    for (unsigned int i = 0; i < Copy.vect.size(); i++)
        vect.push_back(Copy.getVector(i));
    return (*this);
}

unsigned int Span::getVector(int i) const
{
    return (vect.at(i));
}

const unsigned int& Span::getN() const
{
    return (N);
}

int    Span::shortestSpan()
{
    if (vect.size() < 2) throw "Data size must me more then 1 elements";
    std::sort(vect.begin(), vect.end());
    return (get_min(vect.begin(), vect.end()));
};

int    Span::longestSpan()
{
    if (vect.size() < 2) throw "Data size must me more then 1 elements";
    return (*std::max_element(vect.begin(), vect.end()) - *std::min_element(vect.begin(), vect.end()));
};

Span::~Span(){}