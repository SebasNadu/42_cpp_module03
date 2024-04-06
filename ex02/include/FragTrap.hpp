#pragma once
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
  FragTrap(void);
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);
  FragTrap &operator=(FragTrap const &rightHandSide);

  void highFivesGuys(void);
};
