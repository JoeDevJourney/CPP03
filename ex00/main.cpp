/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:45:10 by jbrandt           #+#    #+#             */
/*   Updated: 2025/07/31 14:39:57 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int	main()
{
	ClapTrap clap1("Attacker");
	ClapTrap clap2("Defender");

	clap1.attack("Defender");
	clap2.takeDamage(3);

	clap2.beRepaired(2);
	clap2.attack("Attacker");

	clap1.takeDamage(5);
	clap1.beRepaired(4);
	clap1.attack("Defender");

	for (int i = 0; i < 10; i++) 
		clap1.attack("Defender");

	clap1.beRepaired(1);
	clap1.takeDamage(20);
	clap1.attack("Defender");
	clap1.takeDamage(20);
	clap1.beRepaired(1);
	return (0);
}