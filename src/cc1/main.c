#include <stdio.h>
#include "displayShell.h"
#include "complexe.h"

/*Main Function*/
int main(int argc, char *argv[]) {
	/*Initialize variables*/
	struct cartesian ct1, ct2;
	struct polar pl1, pl2;

	/*Start the program*/
	init_bar();//Display the init bar.
	input_cartesian(&ct1.a, &ct1.b);//Input a complex number in cartesian format.
	display(&ct1.a, &ct1.b);//Display a complex number.
	input_cartesian(&ct2.a, &ct2.b);//Input a complex number in cartesian format.
	display(&ct2.a, &ct2.b);//Display a complex number.
	cartesian_polar(&ct1.a, &ct2.b);//Transform a cartesian complex number to polar complex number.
	end_bar();//Display the end bar.

	return 0;
}
