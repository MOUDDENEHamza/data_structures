#ifndef _COMPLEXE_H_
#define _COMPLEXE_H_

struct cartesien{
		float a;
		float b;
} ct;

struct polaire{
      	float theta;
       	float rho;
} pl;

union cmplx{
	struct cartesien ct;
	struct polaire pl;
};
/*
struct complexe{
	enum type { cart, pol};
};
*/

void pol_cart(float *theta, float *rho);

void cart_pol(float *a, float *b);

void entre_cart(float *a, float *b);

void affiche();

void additionne();

#endif
