#ifndef _COMPLEXE_H_
#define _COMPLEXE_H_

/*This structure represents a complex number in cartesian format*/
struct cartesian{
	float a;
	float b;
} ct;

/*This structure represents a complex number in polar format*/
struct polar{
      	float theta;
       	float rho;
} pl;

/*This union give to user the choice to handle cartesian or polar complex number*/
union cmplex{
	struct cartesian ct;
	struct polar pl;
};

/*
struct complexe{
	enum type { cart, pol};
};
*/

/*Transform a polar complex number to cartesian complex number*/
void polar_cartesian(float *theta, float *rho);

/*Transform a cartesian complex number to polar complex number*/
void cartesian_polar(float *a, float *b);

/*Input a complex number in cartesian format*/
void input_cartesian(float *a, float *b);

/*Add two complex numbers*/
void add(void);

#endif
