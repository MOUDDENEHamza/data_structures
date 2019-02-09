#include <stdio.h>
#include "displayShell.h"
#include "libMath.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*Display the init bar*/
void init_bar(void) {
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t\t"GREEN"GEOMETRY"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n");
}

/*Display the plan equation*/
void display_equation(Plan *plan) {
	printf("\nEquation of plan : %f * x + %f * y + %f * z + %f = 0\n", plan->equation[0], plan->equation[1], plan->equation[2], plan->equation[3]);
}

/*Display the point*/
void display_point(Point *pt) {
	printf("\nCenter of gravity : x = %f\ty = %f\tz = %f\n", pt->x, pt->y, pt->z);
}

/*Display the end bar*/
void end_bar(void) {
        printf("\n\n\t\t\t\t"GREEN"THE END"RESET"\t\t\t\n");
        printf("\n******************************************************************************\n\n");
}
