/*
 * main.cpp
 *
 *  Created on: Feb 17, 2021
 *      Author: root
 */
#include "Person.h"
#include <iostream>

int main(int argc, char **argv) {

	Person person1;		// Normal object
	person1.function1(); //Calling normal function

	//Const objects can only call const functions
	const Person person2; //Const object; const keyword used before object declaration
	person2.function2();

}




