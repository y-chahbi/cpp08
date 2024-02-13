/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:30:57 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/13 09:05:38 by ychahbi          ###   ########.fr       */
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
        Span(const Span& Copy);
        Span& operator=(const Span& Copy);
        void                addNumber(int);
        int                 shortestSpan();
        int                 longestSpan();
        const unsigned int& getN() const;
        unsigned int getVector(int) const;
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