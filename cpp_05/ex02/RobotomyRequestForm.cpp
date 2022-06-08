/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:40:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/08 14:39:39 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationRobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:40:22 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/07 12:41:52 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>       	


RobotomyRequestForm::RobotomyRequestForm(void): Form("unknown", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form(target, 72, 45) {
	std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): Form(obj) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}
/*
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	std::cout << "RobotomyRequestForm assignation operator overload called" << std::endl;
	return (*this);
}*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
	int random;
	std::string	name;

	name = executor.getName();
	srand (time(NULL));
	random = rand() % 2;
	if (random == 1)
		std::cout << "[✅] chiiiiiclonclonpuff, " << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "[❌] poff, " << getName() << "'s robotomization has been unsuccessful" << std::endl;
	std::cout << random << std::endl;
}