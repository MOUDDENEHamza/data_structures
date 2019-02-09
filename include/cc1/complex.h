#ifndef _COMPLEX_H_
#define _COMPLEX_H_

/*This structure represents a complex number in cartesian format*/
typedef struct {
	float a;
	float b;
} cartesian;

/*This structure represents a complex number in polar format*/
typedef struct {
      	float theta;
       	float rho;
} polar;

/*This enumeration determines in which form the union will be used*/
enum format {ct, pl};

/*This structure give to user the choice to handle a cartesian or polar complex number*/
typedef struct {
	enum format f;
	union {
		cartesian ct;
		polar pl;
	};
} complx;

/*Transform a polar complex number to cartesian complex number*/
complx polar_cartesian(complx c1);

/*Transform a cartesian complex number to polar complex number*/
complx cartesian_polar(complx c1);

/*Input a complex number in cartesian format*/
complx input_cartesian(complx *c);

/*Add two complex numbers*/
complx add(complx c1, complx c2);

#endif
