/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:47:08 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 19:30:22 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints    = defaultHitPoints;
	EnergyPoints = defaultEnergyPoints;
	AttackDamage = defaultAttackDamage;
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (HitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of HP and now in a better place" << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}
	EnergyPoints--;
	std::cout << "ScavTrap " << _name << " makes a heavy attack " << target
			  << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (HitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead! How is it supposed to guard something?!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode! You shall not pass!" << std::endl;
}
