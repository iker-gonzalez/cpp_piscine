/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:17:36 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 10:13:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;

}

Brain::Brain(Brain const &obj) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain(void) {
    std::cout << "Brain default destructor called" << std::endl;
}
/*
Brain &Brain::operator=(Brain const &obj) {
    std::cout << "Brain assignation operator overload called" << std::endl;
    this->ideas = obj.ideas;
}*/

std::string Brain::getIdeas(int nb) {
    return(this->ideas[nb]);
}

void Brain::setIdeas(std::string idea, int nb) {
    this->ideas[nb] = idea;
}