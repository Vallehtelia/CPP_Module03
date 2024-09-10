/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:28:16 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/29 19:36:53 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(FragTrap const &other);
		FragTrap(std::string name);
		FragTrap &operator=(FragTrap const &other);
		virtual ~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
