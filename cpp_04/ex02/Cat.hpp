/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/14 10:23:04 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

	private:

		Brain *brain;

	public:

		Cat(void);
		Cat(Cat const &obj);
		~Cat();

		Cat &operator=(Cat const &obj);
		void makeSound(void);
		Brain	*getBrain( void ) const;

};

#endif