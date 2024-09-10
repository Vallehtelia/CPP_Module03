/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:07:13 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 16:31:16 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_guardMode = false;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_guardMode = false;
	std::cout << "ScavTrap " << this->_Name <<" named constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called\n";
	this->_guardMode = other._guardMode;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap Copy assaignment operator called\n";
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	this->_guardMode = other._guardMode;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_Name << " deconstructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!\n";
		this->_EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " is exhausted and needs more energy points!\n";
}

void	ScavTrap::guardGate()
{
	if (!this->_guardMode)
	{
		std::cout << "ScavTrap " << this->_Name << " goes to guard the gate\n";
		this->_guardMode = true;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " is already guarding the gate!\n";
}
