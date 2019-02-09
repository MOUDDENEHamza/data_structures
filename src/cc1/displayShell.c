#include <stdio.h>
#include "displayShell.h"
#include "complex.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*Display the init bar*/
void init_bar(void) {
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t\t"GREEN"COMPLEX NUMBER"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n");
}

/*Display a complex number*/
complx display(complx *c){
        if (c->f == ct) {
		printf("z = %f + i * %f\n", c->ct.a, c->ct.b);
	} else {
		printf("z = %f + i * %f\n", c->pl.rho, c->pl.theta);
	}
}

/*Display the end bar*/
void end_bar(void) {
        printf("\n\n\t\t\t\t"GREEN"THE END"RESET"\t\t\t\n");
        printf("\n******************************************************************************\n\n");
}
