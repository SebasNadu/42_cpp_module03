/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:57:41 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/06 21:57:43 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

std::ostream &operator<<(std::ostream &out, FragTrap const &frag);
