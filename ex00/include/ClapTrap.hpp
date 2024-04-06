/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:53:21 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:53:22 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {
public:
  ClapTrap();
  ~ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(ClapTrap const &src);
  ClapTrap &operator=(ClapTrap const &rightHandSide);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  std::string getName(void) const;
  int getAttackDamage(void) const;
  int getHitPoints(void) const;
  int getEnergyPoints(void) const;

  bool isTheEnd(void) const;

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &trap);
