#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "labyrinth.h"
#include "displayShell.h"
#include "input.h"
#include "stack.h"

/*Main function*/
int main(int argc, char argv[]) {
	/*Initialize variables*/
	time_t t;
	int accept = 0;
	char *status;

	/*Start program*/
	init_bar();//Display the bar init.
	handle_labyrinth();//Create my labyrinth.
	while (accept != 1){//Propose labyrinths to the user until the user accepts one of the them.
		srand(time(&t)); //Initialization of the random generator.
		init_labyrinth();//Init the labyrinth and put the values within.
		display_labyrinth(&l->n, &l->p, l->t);//Display my labyrinth.
		choice(&accept, status);//Give the user the choose of labyrinth.
		separator();//Separate evry step of the program.
	}

	return 0;
}
