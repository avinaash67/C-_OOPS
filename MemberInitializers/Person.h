/*
 * Person.h
 *
 *  Created on: Feb 17, 2021
 *      Author: root
 */

#ifndef PERSON_H_
#define PERSON_H_

class Person {
public:
	Person();
	virtual ~Person();
	Person(int age,int number);
private:
	int age;
	const int number;
};

#endif /* PERSON_H_ */
