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

typedef struct {
	Vector normal_vector;
	Vector planar_vector;
	float *equation;
} Plan;

/*Make the dynamic allocation on the point structure*/
Point *new_point(void);

/*Make the dynamic allocation on the vector structure*/
Vector *new_vector(void);

/*Make the dynamic allocation on the plan structure*/
Plan *new_plan(void);

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

/*Calculate the norm of a vector*/
float norm(Vector *vect);

/*Calculate the plan equation*/
Plan plan_equation(Point *pt1, Point *pt2, Point *pt3);

#endif
