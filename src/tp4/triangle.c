#include <stdio.h>
#include "triangle.h"
#include "libMath.h"

/*Determine the center of gravity*/
Point center_gravity(Point *pt1, Point *pt2, Point *pt3) {
	Point center_point = *new_point();
	Plan plan = plan_equation(pt1, pt2, pt3);
	center_point.x = (pt1->x + pt2->x + pt3->x) * (1 / 3);
	center_point.y = (pt1->y + pt2->y + pt3->y) * (1 / 3);
	center_point.z = -(plan.equation[0] * center_point.x + plan.equation[1] * center_point.y + plan.equation[3]) * (1 / plan.equation[2]);
	return center_point;
}
