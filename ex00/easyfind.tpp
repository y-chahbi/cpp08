/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:10:56 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/24 11:11:44 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
void    easyfind(T Container, int i)
{
    if (std::find(Container.begin(), Container.end(), i) != Container.end())
        std::cout << "The number " << i << " found in the container!" << std::endl;
    else
        std::cout << "the Number you entered Does'nt mutch any number in the container" << std::endl;
}


#endif