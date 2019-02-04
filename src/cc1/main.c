#include <stdio.h>
#include "complexe.h"

int main(int argc, char *argv[]) {
	struct cartesien ct1, ct2;
	struct polaire pl1, pl2;
	
	entre_cart(&ct1.a, &ct1.b);
	affiche(&ct1.a, &ct1.b);
	entre_cart(&ct2.a, &ct2.b);
	affiche(&ct2.a, &ct2.b);
	cart_pol(&ct1.a, &ct2.b);
	//additionne(ct1, ct2);
	affiche(&ct1.a, &ct1.b);

	return 0;
}
