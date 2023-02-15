/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:05:22 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/09 02:02:51 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack( void )
{
	if (WeaponB == nullptr)
		std::cout << name << " Has no weapon\n";
	else
		std::cout << name << " attacks with their " << WeaponB->getType() << "\n";
}

HumanB::HumanB(std::string newName): name(newName), WeaponB(nullptr)
{
	
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	WeaponB = &newWeapon;
}