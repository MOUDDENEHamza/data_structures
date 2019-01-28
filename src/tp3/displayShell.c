#include <stdio.h>
#include "stack.h"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"

/*Display the init bar*/
void init_bar(){
	
	printf("\n******************************************************************************\n");
	printf("\n\t\t\t\t"GREEN"LABYRINTH"RESET"\t\t\t\n");
	printf("\n******************************************************************************\n\n");
	
	return;
}

/*Display the stack*/
void display_stack(int *n, int *p, int **stack){
	int i;
	int j;

	for (i = 0; i < *n; i++) {
		for (j = 0; j < *p; j++) {
			if ( stack[i][j] == 0){
				printf(RED"X"RESET"\t");
			} else {
				printf(BLUE"."RESET"\t");
			}
		}
		printf("\n");
	}
 	printf("\n------------------------------------------------------------------------------\n\n");

	return;	
}
