/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:07:12 by mfunyu            #+#    #+#             */
/*   Updated: 2021/10/23 15:13:30 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		replace(std::string filename, std::string s1, std::string s2);

int		main(int ac, char **av)
{
	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];

	if (ac < 4) {
		std::cout << "required 3 arguments" << std::endl;
		return 0;
	}
	replace(filename, s1, s2);
}