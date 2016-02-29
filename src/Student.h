/*
 * Student.h
 *
 *  Created on: Feb 18, 2016
 *      Author: rajatpawar
 */

#ifndef STUDENT_H_
#define STUDENT_H_

using namespace std;

namespace survey {

class Student {
public:
	Student();
	Student(int priority);
	void AddChoice(int inst,int course);
	int maxChoices;
	int priority;
	int pointer=0;

	// priority list for each student consists of <institution, course> pairs
	// we need to iterate over the priority list, so declare it as an array.
	// a user can have 20 choices/selections at max.


	// create priority for a student

	// choice for the student. Student adds choices "one by one".
	// we execute choices sequentially -> Store choices in an array

	int choices[20][2][1];

	// total Students : 2000
	// total choices : 2000*20 = 40K





	virtual ~Student();
};

} /* namespace survey */

#endif /* STUDENT_H_ */
