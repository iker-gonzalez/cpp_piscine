/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:16 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 10:45:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

    public:

        Dog(void);
        Dog(Dog const &obj);
        ~Dog(void);

        Dog &operator=(Dog const &obj);
        void makeSound(void);
};

#endif