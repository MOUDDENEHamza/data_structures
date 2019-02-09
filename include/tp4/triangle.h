#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "libMath.h"

/*Determine the center of gravity*/
Point center_gravity(Point *pt1, Point *pt2, Point *pt3);

/*Calculate the perimeter of the triangle by tree given points*/
float perimeter_triangle(Point *pt1, Point *pt2, Point *pt3);

/*Calculate the area of the triangle by tree given points*/
float area_triangle(Point *pt1, Point *pt2, Point *pt3);

#endif
