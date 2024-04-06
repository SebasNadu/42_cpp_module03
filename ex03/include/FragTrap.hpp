/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:00:00 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 22:00:01 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
