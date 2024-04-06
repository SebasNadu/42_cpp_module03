#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) {
  this->_name = "Unknown";
  this->ClapTrap::_name = this->_name + "_clap_name";
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;

  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
  this->_name = name;
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;

  std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
  *this = src;
  std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rightHandSide) {
  this->_name = rightHandSide._name;
  ClapTrap::_name = this->_name + "_clap_name";
  this->_hitPoints = rightHandSide._hitPoints;
  this->_energyPoints = rightHandSide._energyPoints;
  this->_attackDamage = rightHandSide._attackDamage;

  std::cout << "DiamondTrap assignation operator called" << std::endl;
  return *this;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "I am " << this->_name << " and my ClapTrap name is "
            << ClapTrap::_name << std::endl;
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamond) {
  std::cout << "DiamondTrap " << diamond.getName() << " has "
            << diamond.getHitPoints() << " hit points, "
            << diamond.getEnergyPoints() << " energy points and "
            << diamond.getAttackDamage() << " attack damage points"
            << std::endl;

  return out;
}
