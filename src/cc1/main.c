#include <stdio.h>
#include "displayShell.h"
#include "complex.h"

/*Main Function*/
int main(int argc, char *argv[]) {
	/*Initialize variables*/
	complx c1, c2;

	/*Start program*/
	init_bar();//Display the init bar.
	input_cartesian(&c1);//Input a complex number in cartesian format.
	display(&c1);//Display a complex number.
	input_cartesian(&c2);//Input a complex number in cartesian format.
	display(&c2);//Display a complex number.
	c1 = cartesian_polar(&c1);//Transform a cartesian complex number to polar complex number.
	display(&c1);//Display a complex number.
	c1 = polar_cartesian(&c1);//Transform a polar complex number to cartesian complex number.
        display(&c1);//Display a complex number.
	end_bar();//Display the end bar.

	return 0;
}
