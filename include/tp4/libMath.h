#ifndef _LIBMATH_H_
#define _LIBMATH_H_

/*Create the point structure*/
struct point{
	float x;
	float y;
	float z;
} *pt;

/*Make the dynamic allocation on the point structure*/
void handle_point(void);

/*Create a point by asking user to input the coordinates*/
void input_point(float *x, float *y, float *z);

#endif
