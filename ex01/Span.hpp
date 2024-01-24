/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:30:57 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/24 17:25:40 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cmath>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vect;
    public:
        Span();
        void    addNumber(int);
        int     shortestSpan();
        int     longestSpan();
        Span(unsigned int);
        ~Span();
};

template <typename Iter>
int get_min(Iter start, Iter end)
{
    int Tmp = 99;
    while (start + 1 < end)
    {
        
        if (*(start + 1) - *start < Tmp)
            Tmp = std::abs(*(start + 1) - *start);
        start++;
    }
    return (Tmp);
}

#endif