/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:02:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:16:51 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

    protected:
        std::string _type;

    public:

        Animal(void);
        Animal(Animal const &obj);
        ~Animal(void);

        Animal &operator=(Animal const &obj);
        
	    const std::string	&getType( void ) const ;

        virtual void makeSound(void) = 0;};

#endif