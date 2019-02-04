#include <stdio.h>
#include <stdlib.h>
#include "libMath.h"

/*Make the dynamic allocation on the point structure*/
void handle_point(void) {
	pt = malloc(sizeof(struct point));

	return;
}

/*Create a point by asking user to input the coordinates*/
void input_point(float *x, float *y, float *z) {
	printf("\nEnter your coordinates x : ");
        scanf("%f", x);
	printf("\nEnter your coordinates y : ");
        scanf("%f", y);
	printf("\nEnter your coordinates z : ");
        scanf("%f", z);
        
	return;
}

/*Create point by the coordinates entred*/   
void create_point(float *x, float *y, float *z) {
	pt->x = *x;
	pt->y = *y;
	pt->z = *z;

	return;
}
