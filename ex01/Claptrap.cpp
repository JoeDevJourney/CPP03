/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:45:38 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 16:10:37 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Default"), HitPoints(defaultHitPoints), EnergyPoints(defaultEnergyPoints), AttackDamage(defaultAttackDamage)
{
	std::cout << "ClapTrap " << _name << " constructed with default constructer" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), HitPoints(defaultHitPoints), EnergyPoints(defaultEnergyPoints), AttackDamage(defaultAttackDamage)
{
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), HitPoints(other.defaultHitPoints),
	EnergyPoints(other.defaultEnergyPoints),
	AttackDamage(other.defaultAttackDamage) 
{
	std::cout << "ClapTrap " << _name << " copy constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this!= &other)
	{
		_name = other._name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned via copy assignment." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of HP and therefore KO" << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
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
		std::cout << "Claptrap " << _name << " is already dead and no longer with us!" << std::endl;
		return;
	}
	HitPoints -= amount;
	if (HitPoints < 0) HitPoints = 0;
	{
		std::cout << "ClapTrap " << _name << " takes " << amount
				  << " points of damage. Remaining HP: " << HitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead and can't be repaired anymore." << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
		return;
	}
	HitPoints += amount;
	EnergyPoints--;
	std::cout << "ClapTrap " << _name << " just repaired itself for "
			  << amount << " HP. Total HP now: " << HitPoints << std::endl;
}
