/*
 * Person.cpp
 *
 *  Created on: Feb 17, 2021
 *      Author: root
 */

#include "Person.h"
#include <iostream>

Person::Person() {
	// TODO Auto-generated constructor stub

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

void Person::function1() {
	std::cout << "I am a normal function \n";
}

void Person::function2() const {					// Const function; const keyword used after function name
	std::cout << "I am const function \n";
}
