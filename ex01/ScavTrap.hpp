/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:46:40 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 15:20:10 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
private:

public:
	ScavTrap(std::string name);
	~ScavTrap();
};

#endif