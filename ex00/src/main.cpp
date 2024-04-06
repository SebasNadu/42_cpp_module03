/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:51:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:52:10 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  std::cout << std::endl;

  return 0;
}
