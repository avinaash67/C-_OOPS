/*
 * FirstClass.h
 *
 *  Created on: Feb 15, 2021
 *      Author: root
 */

#ifndef FIRSTCLASS_H_
#define FIRSTCLASS_H_

class FirstClass {
public:
	FirstClass();
	virtual ~FirstClass();
	void setter(int age);
	void getter();

private:
	int age;
	char* name;

};

#endif /* FIRSTCLASS_H_ */
