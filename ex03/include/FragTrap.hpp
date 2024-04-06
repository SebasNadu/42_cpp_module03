#pragma once
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public virtual ClapTrap {
public:
  FragTrap(void);
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);
  FragTrap &operator=(FragTrap const &rightHandSide);

  void highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &out, FragTrap const &frag);
