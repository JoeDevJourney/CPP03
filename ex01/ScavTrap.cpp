/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:47:08 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 15:42:07 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name), HitPoints(100), EnergyPoints(50), AttackDamage(20)
{
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
	
}