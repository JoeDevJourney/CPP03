/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:35:38 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 18:34:37 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
	: ClapTrap("unnamed ClapTrap"), ScavTrap(), FragTrap(), _name("Default")
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << _name << " (default) has been forged from pure Diamond." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << _name << " has been forged from pure Diamond." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copied." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "DiamondTrap " << _name << " assigned." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " was crushed back into diamond dust!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	if (HitPoints <= 0)
	{
		std::cout << "DiamondTrap " << _name << " has returned to dust and therefore can't have a mental breakdown!" << std::endl;
		return;
	}
	std::cout << "I, " << _name << ", who am i really? What have i become?" << std::endl;
}
