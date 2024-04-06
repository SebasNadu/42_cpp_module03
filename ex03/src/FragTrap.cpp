#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
  std::cout << "FragTrap default constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
  std::cout << "FragTrap constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rightHandSide) {
  std::cout << "FragTrap assignation operator called" << std::endl;
  ClapTrap::operator=(rightHandSide);
  return *this;
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  if (this->_hitPoints == 0) {
    std::cout << "FragTrap " << this->_name
              << " is dead, he can't give a high five" << std::endl;
  } else {
    std::cout << "FragTrap " << this->_name << " gives a high five to everyone!"
              << std::endl;
  }
}

std::ostream &operator<<(std::ostream &out, FragTrap const &frag) {
  out << "FragTrap " << frag.getName() << " has " << frag.getHitPoints()
      << " hit points, " << frag.getEnergyPoints() << " energy points and "
      << frag.getAttackDamage() << " attack damage points" << std::endl;
  return out;
}
