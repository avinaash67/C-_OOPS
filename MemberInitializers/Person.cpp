/*
 * Person.cpp
 *
 *  Created on: Feb 17, 2021
 *      Author: root
 */

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person():age(10),number(20) {
	// TODO Auto-generated constructor stub

}
Person::Person(int age, int number)
				: age(age),
				  number(number){
	// TODO Auto-generated constructor stub
	cout << "Member initializers are used to initialize const variables during run-time";
	cout << "\n num = "<< number <<"\n Age = " << age;
}


Person::~Person() {
	// TODO Auto-generated destructor stub
}


