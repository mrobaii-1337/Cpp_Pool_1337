/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:42:09 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 22:34:40 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombieA;
	Zombie *zombieB;
	zombieA = newZombie("Zombie A");
	zombieA->announce();
	zombieB = newZombie("Zombie B");
	zombieB->announce();
	randomChump("Zombie C");
	delete zombieA;
	delete zombieB;
	
	
	
}