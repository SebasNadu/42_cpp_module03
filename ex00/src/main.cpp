#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main(void) {
  ClapTrap a("Godzilla");
  ClapTrap b("King Kong");

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
}
