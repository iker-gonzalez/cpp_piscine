/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:44:25 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/27 11:20:46 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename H>
void	print(H const &data) {
	std::cout << data << std::endl;
};

template <typename T>
void	iter(T *arr, int length, void(*func) (T const &)) {

	int i = 0;
	while (i < length) {
		func(arr[i]);
		i++;
	}
};

#endif