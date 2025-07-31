/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:46:40 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 14:52:58 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SCAVTRAP_HPP
#ifndef SCAVTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int HitPoints;
	int EnergyPoints;
	int AttackDamage;

public:
	ClapTrap(std::string name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif SCAVTRAP_HPP