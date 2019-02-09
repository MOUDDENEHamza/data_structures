#include <stdio.h>
#include <math.h>
#include "complex.h"

/*Transform a polar complex number to cartesian complex number*/
complx polar_cartesian(complx *c1){
	complx c2;
	c2.f = ct; 
	c2.ct.a = c1->pl.rho * cos(c1->pl.theta);
	c2.ct.b = c1->pl.rho * sin(c1->pl.theta);
	printf("\nTransformation from polar to cartesian.\n");
	return c2;
}

/*Transform a cartesian complex number to polar complex number*/
complx cartesian_polar(complx *c1) {
	complx c2;
	c2.f = pl;
	c2.pl.rho = sqrt(pow(c1->ct.a, 2) + pow(c1->ct.b, 2));
	c2.pl.theta = atan(c1->ct.b / c1->ct.a);
	printf("\nTransformation from cartesian to polar.\n");
	return c2;
}

/*Input a complex number in cartesian format*/
complx input_cartesian(complx *c) {
	c->f = ct;
	printf("\nInput the real part : ");
	scanf("%f", &c->ct.a);
	printf("Input the imaginary part : ");
        scanf("%f", &c->ct.b);
}
