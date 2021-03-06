/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:52:06 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/10 13:20:23 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		RobotomyRequestForm(std::string const &obj);

		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
		
		void action(Bureaucrat const & executor) const;
};


#endif