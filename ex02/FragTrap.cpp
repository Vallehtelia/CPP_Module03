/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:29:40 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 19:35:10 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap " << this->_Name <<" named constructor called\n";
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap Copy assaignment operator called\n";
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_Name << " deconstructor called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "FragTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!\n";
		this->_EnergyPoints--;
	}
	else
		std::cout << "FragTrap " << this->_Name << " is exhausted and needs more energy points!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " positively asking for high fives!!\n";
}
