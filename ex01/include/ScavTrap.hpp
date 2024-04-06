#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
public:
  ScavTrap(void);
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);
  ScavTrap &operator=(ScavTrap const &rightHandSide);

  void attack(std::string const &target);
  void guardGate(void);
};
