/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:51:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/11 17:33:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	
	private:

		std::string name;
		void	sayName(void);


	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		std::string getName(void);
		void setName(std::string name);
};

#endif