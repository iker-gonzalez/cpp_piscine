/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:57:43 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/27 10:08:09 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class Scalar {

	private:
		std::string _input;
		std::string _type;
		bool		_char;
		bool		_int;
		bool		_float;
		bool		_decimal;

	public:

		Scalar(void);
		Scalar(std::string input);
		Scalar(Scalar const &obj);

		Scalar &operator=(Scalar const &obj);

		~Scalar(void);

		std::string getType(void) const;

		void searchType(void);
		void findChar(std::string s, bool *dataType, std::string input);
		void setDataType(void);
		void findLimit(void);
		void findSpecialCharacters(void);
		void checkImpossibles(void);
		int nbChars(void);

		void convert(void);
		void convertFromChar(void);
		void convertFromInt(void);
		void convertFromFloat(void);
		void convertFromDouble(void);
		void convertFromSpecial(void);

		class ConversionNotPossible : public std::exception{
        	public:
    			virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Scalar const &fixed);


#endif