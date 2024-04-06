#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
  DiamondTrap a("Godzilla");
  DiamondTrap b("King Kong");

  a.whoAmI();
  b.whoAmI();
  b.attack(a.getName());
  std::cout << a << std::endl;
  a.takeDamage(5);
  std::cout << a << std::endl;
  a.beRepaired(5);
  std::cout << a << std::endl;
  a.takeDamage(10);
  std::cout << a << std::endl;
  a.beRepaired(100);
  std::cout << a << std::endl;
  std::cout << std::endl;
  a.attack(b.getName());
  std::cout << b << std::endl;
  b.takeDamage(5);
  std::cout << b << std::endl;
  b.beRepaired(5);
  std::cout << b << std::endl;
  b.takeDamage(9);
  std::cout << b << std::endl;
  b.attack("Berlin");
  std::cout << b << std::endl;
  b.highFivesGuys();

  a = b;
  a.whoAmI();
  std::cout << std::endl;

  return 0;
}
