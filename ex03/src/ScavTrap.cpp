/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:59:40 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:59:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
  std::cout << "ScavTrap default constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
  std::cout << "ScavTrap constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rightHandSide) {
  std::cout << "ScavTrap assignation operator called" << std::endl;
  ClapTrap::operator=(rightHandSide);
  return *this;
}

void ScavTrap::attack(std::string const &target) {
  if (!this->isTheEnd()) {
    std::cout << "ScavTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  }
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode"
            << std::endl;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &scav) {
  out << "ScavTrap " << scav.getName() << " has " << scav.getHitPoints()
      << " hit points, " << scav.getEnergyPoints() << " energy points and "
      << scav.getAttackDamage() << " attack damage points" << std::endl;
  return out;
}
