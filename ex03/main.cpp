/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:38:07 by jbrandt           #+#    #+#             */
/*   Updated: 2025/08/04 18:18:18 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap dt("Dia");

	dt.attack("TrainingsDummy");
	dt.highFivesGuys();
	dt.guardGate();
	dt.whoAmI();

	dt.takeDamage(30);
	dt.beRepaired(10);
	for (int i = 0; i < 51; i++) 
		dt.attack("Trainings Dummy");
	dt.takeDamage(81);

	dt.attack("TrainingsDummy");
	dt.highFivesGuys();
	dt.guardGate();
	dt.whoAmI();
	dt.takeDamage(1);
	dt.beRepaired(1);
	return (0);
}
