/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:01:59 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/17 11:53:55 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int i;
int j;

int main(int argc, char** argv) 
{
    if (argc < 2) 
	{
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE\n";
        return 0;
    }

    j = 1;
    while (j < argc)
	{
        i = 0;
        while (argv[j][i] != '\0') 
		{
            std::cout << static_cast<char>(std::toupper(argv[j][i]));
            i++;
        }
        j++;
    }
    std::cout << "\n";
    return 0;
}
