/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:27:10 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/25 17:23:01 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

template <typename T>

class MutantStack : public std::stack<T>
{
    private:
    public:
        MutantStack();
        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();
        ~MutantStack();
};

#include "MutantStack.tpp"
#endif