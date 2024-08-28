/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:14:50 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/28 19:21:30 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Default constructor called\n";
	this->_Name = Name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor called\n";
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Copy assignment operator called\n";
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!\n";
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap is exhausted and needs more energy points!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " heals " << amount << "health points!\n";
		this->_EnergyPoints--;
		this->_HitPoints += amount;
	}
	else if (this->_EnergyPoints <= 0)
		std::cout << "ClapTrap is exhausted and needs more energy points!\n";
	else
		std::cout << "ClapTrap is out of health points!\n";
}
