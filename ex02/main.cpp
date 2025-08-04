/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:45:10 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 14:34:59 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("Claptrap");
	ScavTrap scav("Serena");
	FragTrap frag("Fraggy");

	clap.attack("Trainings Dummy");
	scav.attack("Trainings Dummy");
	frag.attack("Trainings Dummy");

	clap.takeDamage(3);
	scav.takeDamage(30);
	frag.takeDamage(30);

	clap.beRepaired(5);
	scav.beRepaired(15);
	frag.beRepaired(10);

	frag.highFivesGuys();

	for (int i = 0; i < 100; i++) 
		frag.attack("Trainings Dummy");
	frag.takeDamage(81);
	frag.attack("Trainings Dummy");
	frag.takeDamage(1);
	frag.beRepaired(1);
	frag.highFivesGuys();
	return(0);
}
