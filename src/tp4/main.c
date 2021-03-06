#include <stdio.h>
#include "triangle.h"
#include "displayShell.h"
#include "libMath.h"

/*Main function*/
int main(int argc, char *argv[]) {
	/*Initialize variables*/
	float x = 1;
	float y = 2;
	float z = 3;
	Point pt1, pt2, pt3, pt4, center_point;
	Vector vect1, vect2, vect3;
	Plan plan;
	
	/*Start program*/
	init_bar();//Display the init bar.
	pt1 = input_point();//Ask user to input the coordinates then create the point by using the input.
       	pt2 = create_point(&x, &y, &z);//Create point by the coordinates entred in the parameters.	
	pt3 = input_point();//Ask user to input the coordinates then create the point by using the input.
	pt4 = input_point();//Ask user to input the coordinates then create the point by using the input.
	vect1 = vectorize(&pt1, &pt2);//Define the vector build thanks to two given points.
	vect2 = vectorize(&pt3, &pt4);//Define the vector build thanks to two given points.
	vect3 = vector_product(&vect1, &vect2);//Calculate the vector product.
	printf("Product scalar : %f\n", scalar_product(&vect1, &vect2));//Calculate the scalar product.
	printf("Product scalar : %f\n", scalar_product(&vect1, &vect3));//Calculate the scalar product.
	printf("Norm : %f\n", norm(&vect3));//Calculate the scalar product.
	plan = plan_equation(&pt1, &pt2, &pt3);//Calculate the plan equation.
	display_equation(&plan);//Display the plan equation.
	center_point = center_gravity(&pt1, &pt2, &pt3);//Determine the center of gravity.
	display_point(&center_point);//Display the point coordinates.
	end_bar();//Display the end bar.

	return 0;
}
