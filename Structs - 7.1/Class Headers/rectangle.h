/*
 *  rectangle.h
 *  Class Headers
 *
 *  Created by Alexander on 7/26/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
	double length;
	double width;
	
public:
	bool setLength(double);
	bool setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
};
#endif
