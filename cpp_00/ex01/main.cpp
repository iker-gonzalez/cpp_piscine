/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/04/04 12:40:56 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
    
    Phonebook phonebook;
    std::string command;
    
    std::cout << "\n * MY AWESOME PHONEBOOK * \n";
    while (command != "EXIT")
    {
        std::cout << "\n> Enter your command [ADD, SEARCH, EXIT]\n\n";
        std::cin >> command;
        if (command == "ADD")
        	phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command != "EXIT")
			std::cout << "\n///  Invalid command. Try again.  ///\n";
    }
    return (0);
}