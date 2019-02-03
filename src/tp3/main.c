#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "labyrinth.h"
#include "displayShell.h"
#include "input.h"
#include "stack.h"

#define BUFFER 255

/*Main function*/
int main(int argc, char argv[]) {
	/*Initialize variables*/
	time_t t;
	int accept = 0;
	char status[BUFFER];
	int x = 0, y = 1, a = 1, b = 1;
	int size = 0;
	int res[size];

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
	handle_stack();//Create my stack.
	add(&x, &y, &a, &b);//Make the the elementary steps in the stack.
	browse(&a, &b, res, &size);//Explore the labyrinth.
	end_browsing();//Check if the exploration is ending.

	return 0;
}
