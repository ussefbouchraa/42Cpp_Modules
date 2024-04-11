/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:32:01 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 04:52:24 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"



int main()
{
	Animal	*animals[6] = {new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog()};
	for (int i = 0; i < 6; i++) {
		delete animals[i];
	}
}


