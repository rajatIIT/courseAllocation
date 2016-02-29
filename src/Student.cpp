/*
 * Student.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: rajatpawar
 */

#include "Student.h"
#include <iostream>

using namespace std;

namespace survey {

Student::Student() {
	// TODO Auto-generated constructor stub

}

Student::Student(int priority) {
	this->priority = priority;
}

void Student::AddChoice(int inst, int course) {
	if (pointer == 19) {
		cout<<"Error! Can't have more than 20 choices.";
	} else {
		this->choices[pointer][0][0] = inst;
		this->choices[pointer][1][0] = course;
		pointer++;
	}
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

} /* namespace survey */
