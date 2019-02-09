#include <stdio.h>
#include "displayShell.h"
#include "libMath.h"

/*Main function*/
int main(int argc, char *argv[]) {
	/*Initialize variables*/
	float x = 4;
	float y = 5;
	float z = 6;
	Point pt1, pt2, pt3, pt4;
	Vector vect1, vect2, vect3;

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
	end_bar();//Display the end bar.

	return 0;
}
