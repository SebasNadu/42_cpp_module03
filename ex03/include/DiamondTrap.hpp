#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
public:
  DiamondTrap(void);
  DiamondTrap(std::string const &name);
  DiamondTrap(DiamondTrap const &src);
  ~DiamondTrap(void);

  DiamondTrap &operator=(DiamondTrap const &rightHandSide);

  void whoAmI(void);
  using ScavTrap::attack;

private:
  std::string _name;
};

std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamond);
