#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stack.h"
#include "displayShell.h"

/*Main function*/
int main(int argc, char argv[]) {
	/*Initialize variables*/
	time_t t;
	int accept = 0;
	char *status;

	/*Start program*/
	init_bar();//Display the bar init.
	handle_stack();//Create my stack.
	while (accept != 1){//Propose labyrinths to the user until the user accepts one of the them.
		srand(time(&t)); //Initialization of the random generator.
		init_stack();//Init the stack and put the values within.
		display_stack(&s->n, &s->p, s->st);//Display my stack.
		choice(&accept, status);//Give the user the choose of labyrinth.
	}

	return 0;
}
