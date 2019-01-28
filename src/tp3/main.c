#include <stdio.h>
#include "stack.h"
#include "displayShell.h"

int main(int argc, char argv[]) {
	
	init_bar();//Display the bar init.
	handle_stack();//Create my stack.
	srand(12500); //Initialization of the random generator.
	init_stack();//Init the stack and put the values within.
	display_stack(&s->n, &s->p, s->st);//Display my stack.

	return 0;
}
