/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:07:15 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 16:06:14 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	private:
		bool	_guardMode;
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &other);
		ScavTrap(std::string name);
		ScavTrap &operator=(ScavTrap const &other);
		virtual ~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
