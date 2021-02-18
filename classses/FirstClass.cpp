/*
 * FirstClass.cpp
 *
 *  Created on: Feb 15, 2021
 *      Author: root
 */

#include "FirstClass.h"
#include <iostream>

FirstClass::FirstClass()
			:age{20},name{"Avinaash"}  	//Member initializer
{
	// default constructor
	std::cout << "Default constructor" << "\n";
	std::cout << "Name:" << name << "\n";
	std::cout<< "Age:" << age << "\n";

}

FirstClass::~FirstClass() {
	// default destructor
}

void FirstClass::setter(int age)
{
	std::cout << "Member function" << "\n";
	this->age = age;
	name = "Avi";
}

void FirstClass::getter(){
	std::cout << "Name:" << name << "\n";
	std::cout<< "Age:" << age;

}
