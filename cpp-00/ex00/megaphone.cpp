/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:36:49 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/17 20:59:45 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for(int i = 1; argv[i]; i++)
        {
            std::string string = argv[i];
            for (char &c : string)
                c = std::toupper(c);
            std::cout << string;
        }
    std::cout << "\n";
    return (0);
}
