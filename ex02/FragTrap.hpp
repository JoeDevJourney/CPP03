/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:32:33 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 19:42:03 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
private:
	static const int defaultHitPoints = 100;
	static const int defaultEnergyPoints = 100;
	static const int defaultAttackDamage = 30;

public:
	FragTrap(std::string name);
	~FragTrap();

	void highFivesGuys(void);
};

#endif