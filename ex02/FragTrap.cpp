/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:32:53 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 14:22:54 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints    = defaultHitPoints;
	EnergyPoints = defaultEnergyPoints;
	AttackDamage = defaultAttackDamage;
	std::cout << "FragTrap " << _name << " has arrived!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " left without a trace. Where could he be?" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (HitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is destroyed. It wished it could high five someone for the last time again." << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " high fives everyone!" << std::endl;
}
