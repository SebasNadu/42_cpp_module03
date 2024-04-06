#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
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
  if (this != &rightHandSide) {
    this->_name = rightHandSide._name;
    this->_hitPoints = rightHandSide._hitPoints;
    this->_energyPoints = rightHandSide._energyPoints;
    this->_attackDamage = rightHandSide._attackDamage;
  }
  std::cout << "ScavTrap assignation operator called" << std::endl;
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