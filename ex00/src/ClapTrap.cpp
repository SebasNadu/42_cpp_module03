/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:52:47 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:53:01 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
  *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rightHandSide) {
  if (this != &rightHandSide) {
    this->_name = rightHandSide._name;
    this->_hitPoints = rightHandSide._hitPoints;
    this->_energyPoints = rightHandSide._energyPoints;
    this->_attackDamage = rightHandSide._attackDamage;
  }
  std::cout << "ClapTrap assignation operator called" << std::endl;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap destructor called" << std::endl;
}

bool ClapTrap::isTheEnd(void) const {
  if (!this->_energyPoints || !this->_hitPoints) {
    if (!this->_energyPoints)
      std::cout << "ClapTrap " << this->_name << " is out of energy points!"
                << std::endl;
    else
      std::cout << "ClapTrap " << this->_name << " is out of hit points!"
                << std::endl;
    return true;
  }
  return false;
}

void ClapTrap::attack(const std::string &target) {
  if (!this->isTheEnd()) {
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << this->_name << " loses " << amount
            << " points of damage!" << std::endl;
  if (this->_hitPoints < amount) {
    this->_hitPoints = 0;
  } else {
    this->_hitPoints -= amount;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->isTheEnd())
    return;
  std::cout << "ClapTrap " << this->_name << " is repaired for " << amount
            << " hit points!" << std::endl;
  if (this->_hitPoints + amount > 100) {
    this->_hitPoints = 100;
  } else {
    this->_hitPoints += amount;
  }
  this->_energyPoints--;
}

std::string ClapTrap::getName(void) const { return this->_name; }

int ClapTrap::getAttackDamage(void) const { return this->_attackDamage; }

int ClapTrap::getHitPoints(void) const { return this->_hitPoints; }

int ClapTrap::getEnergyPoints(void) const { return this->_energyPoints; }

std::ostream &operator<<(std::ostream &out, ClapTrap const &trap) {
  out << "ClapTrap " << trap.getName() << " has " << trap.getHitPoints()
      << " hit points, " << trap.getEnergyPoints() << " battery life and "
      << trap.getAttackDamage() << " attack damage" << std::endl;
  return out;
}
