/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:45:38 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/29 19:24:28 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of HP and therefore KO" << std::endl;
		return;
	}
	EnergyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is no longer with us!" << std::endl;
		return;
	}
	HitPoints -= amount;
	if (HitPoints < 0)
	{
		std::cout << "ClapTrap " << _name << " takes" << amount
				  << " points of damage. Remaining HP: " << HitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
		return;
	}
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead and can't repair himself." << std::endl;
		return;
	}
	HitPoints += amount;
	EnergyPoints--;
	std::cout << "ClapTrap " << _name << "just repar itself for "
			  << amount << " HP. Total HP now: " << HitPoints << std::endl;
}
