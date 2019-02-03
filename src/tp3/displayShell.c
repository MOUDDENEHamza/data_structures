#include <stdio.h>

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

/*Display the labyrinth*/
void display_labyrinth(int *n, int *p, int **t){
	int i;
	int j;
	
	printf("\n");
	for (i = 0; i < *n; i++) {
		for (j = 0; j < *p; j++) {
			if ( t[i][j] == 0){
				printf(RED"X"RESET" ");
			} else {
				printf(BLUE"."RESET" ");
			}
		}
		printf("\n");
	}

	return;	
}

/*Separate evry step of the program*/
void separator() {

	printf("\n------------------------------------------------------------------------------\n\n");

	return;
}

/*Display the end bar*/
void end_bar(void) {
	
	printf("\n\nThe labyrinth has been explored.\n\n");
	printf("\n\t\t\t\t"GREEN"END LABYRINTH"RESET"\t\t\t\n");
        printf("\n******************************************************************************\n\n");

	return;
}
