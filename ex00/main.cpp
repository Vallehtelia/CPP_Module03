/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:45:42 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 16:05:13 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
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
