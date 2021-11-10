/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:24:36 by mfunyu            #+#    #+#             */
/*   Updated: 2021/11/10 14:46:42 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (_weapon->getType().empty()) {
		std::cout << _name << " does not have a weapon" << std::endl;
	} else {
		std::cout << _name << " attacks with his " <<\
					 _weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
