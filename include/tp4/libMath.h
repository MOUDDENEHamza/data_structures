#ifndef _LIBMATH_H_
#define _LIBMATH_H_

/*Create the point structure*/
typedef struct {
	float x;
	float y;
	float z;
} Point;

/*Create the vector structure*/
typedef struct {
        Point pt1;
        Point pt2;
	float *vct;
} Vector;

/*Make the dynamic allocation on the point structure*/
Point *new_point(void);

/*Make the dynamic allocation on the vector structure*/
Vector *new_vector(void);

/*Create a point by asking user to input the coordinates*/
Point input_point(void);

/*Create a point by the coordinates entred in parameters*/
Point create_point(float *x, float *y, float *z);

/*Define the vector build thanks to two given points*/
Vector vectorize(Point *pt1,Point *pt2);

/*Calculate the vector product*/
Vector vector_product(Vector *vect1, Vector *vect2);

/*Calculate the vector product*/
float scalar_product(Vector *vect1, Vector *vect2);

#endif
