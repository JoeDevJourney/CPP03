/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:47:08 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 16:23:29 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unnamed ScavTrap")
{
	HitPoints    = defaultHitPoints;
	EnergyPoints = defaultEnergyPoints;
	AttackDamage = defaultAttackDamage;
	std::cout << "ScavTrap " << _name << " constructed with default constructer" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints    = defaultHitPoints;
	EnergyPoints = defaultEnergyPoints;
	AttackDamage = defaultAttackDamage;
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << " copied from another ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this!= &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap " << _name << " copy assigned." << std::endl;
	return (*this);
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
