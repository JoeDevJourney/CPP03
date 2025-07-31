/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:45:10 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 19:00:43 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("Claptrap");
	ScavTrap scav("Serena");

	clap.attack("Trainings Dummy");
	scav.attack("Trainings Dummy");

	clap.takeDamage(3);
	scav.takeDamage(30);

	clap.beRepaired(5);
	scav.beRepaired(15);

	scav.guardGate();

	for (int i = 0; i < 51; i++) 
		scav.attack("Trainings Dummy");
	scav.takeDamage(85);
	scav.attack("Trainings Dummy");
	scav.takeDamage(1);
	scav.beRepaired(1);
	scav.guardGate();
	return(0);
}
