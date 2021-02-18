/*
 * main.cpp
 *
 *  Created on: Feb 17, 2021
 *      Author: root
 */

#include "./Person.h"
#include <iostream>

int main(int argc, char **argv) {

	Person person1;
	Person *personPointer1 = &person1;

	personPointer1->printfunction();
}



