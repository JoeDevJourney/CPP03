/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:46:40 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 19:20:46 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
private:
	static const int defaultHitPoints = 100;
	static const int defaultEnergyPoints = 50;
	static const int defaultAttackDamage = 20;

public:
	ScavTrap(std::string name);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif