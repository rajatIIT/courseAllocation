/*
 * Availability.h
 *
 *  Created on: Feb 18, 2016
 *      Author: rajatpawar
 */

#ifndef AVAILABILITY_H_
#define AVAILABILITY_H_

namespace survey {

class Availability {
public:
	Availability();
	int institutionSize;
	int coursesSize;

	//int avalaibility[institutionSize][coursesSize];


	virtual ~Availability();

};

} /* namespace survey */

#endif /* AVAILABILITY_H_ */
