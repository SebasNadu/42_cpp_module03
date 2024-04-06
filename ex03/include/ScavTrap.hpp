/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:59:46 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:59:47 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public virtual ClapTrap {
public:
  ScavTrap(void);
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);
  ScavTrap &operator=(ScavTrap const &rightHandSide);

  void attack(std::string const &target);
  void guardGate(void);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &scav);
