/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:06:32 by hikaru            #+#    #+#             */
/*   Updated: 2023/08/19 18:29:30 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
public:
	// constructor
	FlagTrap();
	FlagTrap(std::string name);
	
	// destructor
	~FlagTrap();
	
	// copy constructor
	FlagTrap(const FlagTrap &flag);

	// copy assignment operator
	FlagTrap &operator=(const FlagTrap &flag);

	// method
	void	attack(const std::string &target);
	void	highFivesGuys(void);
	
};
