#include <stdio.h>
#include <math.h>
#include "complexe.h"

void pol_cart(float *theta, float *rho){
	
	ct.a = *rho * cos(*theta);
	ct.b = *rho * sin(*theta);

	return;
}


void cart_pol(float *a, float *b) {
	pl.rho = sqrt(pow(*a, 2) + pow(*b, 2));
	pl.theta = atan(*b / *a);
	
	return;
}

void entre_cart(float *a, float *b) {
	
	printf("entrez la partie réelle : ");
	scanf("%f", a);
	printf("entrez la partie imaginaire : ");
        scanf("%f", b);
	return;
}

//void additionne(struct *a, struct *b){
//	return;
//}

void affiche(float *a, float *b){
	printf("\n%f + i * %f\n", *a, *b);
	
	return;
}
