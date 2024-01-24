/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:30:59 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/24 17:23:26 by ychahbi          ###   ########.fr       */
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