/*
 * main.cpp
 *
 *  Created on: Feb 15, 2021
 *      Author: Avinaash
 */

// Const operator
// A compile time constraint that an object or a variable cannot be changed during runtime

int main(int argc, char **argv) {

	const int i = 5;

	// i = 6;  			// Throws Error

	const int *p1 = &i; // Data is const, not the pointer

	//int* const p2; 	// Pointer is const, data is not

}



