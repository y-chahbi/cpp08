/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:10:58 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/13 08:38:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> continer_v;
    std::list<int> continer_l;
    std::array<int, 100> continer_a;

    for (int i = 0; i < 100; i++)
        continer_v.push_back(i);

    for (int i = 0; i < 100; i++)
        continer_l.push_back(i);
    
    for (int i = 0; i < 100; i++)
        continer_a[i] = i;

    try
    {        
        easyfind(continer_v, 65);
        easyfind(continer_l, 65);
        easyfind(continer_a, 65);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}