/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:45:42 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 19:44:42 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "\n\033[32m### Testing ClapTrap ###\033[0m\n";
		ClapTrap	clappedy("Clappy");
		ClapTrap	clapsy("Lady Clapsy");

		clappedy.attack("Markku");
		clappedy.takeDamage(4);
		clappedy.takeDamage(4);
		clappedy.beRepaired(8);
		clappedy.attack("Markku");
		clappedy.takeDamage(15);
		clappedy.takeDamage(1);
		clappedy.beRepaired(10);

		std::cout << "\n";
		clapsy.attack("jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.attack("Jarkko");
		clapsy.takeDamage(8);
		clapsy.beRepaired(1);
		clapsy.attack("Jarkko");

		std::cout << "\n";
		ClapTrap	clippy = clapsy;
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.attack("Valle");
		clippy.takeDamage(8);
		clippy.beRepaired(1);
		clippy.attack("Valle");
	}

	{
		std::cout << "\n";
		std::cout << "\033[32m### Testing ScavTrap ###\033[0m\n";
		ScavTrap	Deffu;
		ScavTrap	Pekko("Pekko");
		ScavTrap	Cake = Deffu;
		ScavTrap	Sweaty;

		Sweaty = Pekko;
		Pekko.guardGate();
		Pekko.guardGate();
		Pekko.attack("Psyco");
		Deffu.attack("Psyco2");
		Deffu.guardGate();
		Deffu.guardGate();
		std::cout << "\n";
		Cake.attack("Psyco3");
		Cake.guardGate();
		Cake.guardGate();
		std::cout << "\n";
		Sweaty.attack("Psyco4");
		Sweaty.guardGate();
		Sweaty.guardGate();
		std::cout << "\n";
	}

	{
		std::cout << "\n";
		std::cout << "\033[32m### Testing FragTrap ###\033[0m\n";
		FragTrap	topFrag;
		FragTrap	bottomFrag("Vili");
		FragTrap	middleFrag = topFrag;
		FragTrap	skillFrag;

		skillFrag = bottomFrag;
		topFrag.highFivesGuys();
		bottomFrag.highFivesGuys();
		middleFrag.highFivesGuys();
		skillFrag.highFivesGuys();
		skillFrag.attack("Joe Biden");
		topFrag.attack("Donald Duck");
		bottomFrag.attack("DJ Kamala Harrison");
		middleFrag.attack("Elon Husky");
	}
}
