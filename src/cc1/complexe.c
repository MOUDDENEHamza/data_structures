#include <stdio.h>
#include <math.h>
#include "complexe.h"

/*Transform a polar complex number to cartesian complex number*/
void polar_cartesian(float *theta, float *rho){
	ct.a = *rho * cos(*theta);
	ct.b = *rho * sin(*theta);
}

/*Transform a cartesian complex number to polar complex number*/
void cartesian_polar(float *a, float *b) {
	pl.rho = sqrt(pow(*a, 2) + pow(*b, 2));
	pl.theta = atan(*b / *a);
}

/*Input a complex number in cartesian format*/
void input_cartesian(float *a, float *b) {
	printf("\nInput the real part : ");
	scanf("%f", a);
	printf("Input the imaginary part : ");
        scanf("%f", b);
}
