#include <stdio.h>
#include <stdlib.h>
#include "libMath.h"

#define DIMENSION  3

/*Make the dynamic allocation on the point structure*/
Point *new_point(void) {
	Point *pt = (Point *) malloc(sizeof(Point));
	return pt;
}

/*Make the dynamic allocation on the point structure*/
Vector *new_vector(void) {
        Vector *vect = (Vector *) malloc(sizeof(Vector));
        vect->vct = (float *) malloc(DIMENSION * sizeof(float));
	return vect;
}

/*Create a point by asking user to input the coordinates*/
Point input_point(void) {
	Point pt = *new_point();
	printf("\nEnter your coordinates x : ");
        scanf("%f", &pt.x);
	printf("Enter your coordinates y : ");
        scanf("%f", &pt.y);
	printf("Enter your coordinates z : ");
        scanf("%f", &pt.z);
	return pt;
}

/*Create a point by the coordinates entred in parameters*/   
Point create_point(float *x, float *y, float *z) {
	Point pt = *new_point();
	pt.x = *x;
	pt.y = *y;
	pt.z = *z; 
	return pt;
}

/*Define the vector build thanks to two given points*/
Vector vectorize(Point *pt1,Point *pt2) {
	Vector vect = *new_vector();
	vect.vct[0] = pt2->x - pt1->x;
	vect.vct[1] = pt2->y - pt1->y;
	vect.vct[2] = pt2->z - pt1->z;
	return vect;
}

/*Calculate the vector product*/
Vector vector_product(Vector *vect1, Vector *vect2) {
	Vector vect = *new_vector();
	vect.vct[0] = vect1->vct[1] * vect2->vct[2] - vect1->vct[2] * vect2->vct[1];
        vect.vct[1] = -(vect1->vct[0] * vect2->vct[2] - vect1->vct[2] * vect2->vct[0]);
        vect.vct[2] = vect1->vct[0] * vect2->vct[1] - vect1->vct[1] * vect2->vct[0];
	return vect;
}

/*Calculate the vector product*/
float scalar_product(Vector *vect1, Vector *vect2) {
	int i;
	float res;
	for (i = 0; i < DIMENSION; i++) {
		res += vect1->vct[i] * vect2->vct[i];
	}
	return res;
}
