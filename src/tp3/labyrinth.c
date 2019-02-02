#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "labyrinth.h"

#define LINES 5
#define COLUMNS 6

/*Make the dynamic allocation on the precedent structure*/
void handle_labyrinth(){
	int i;
	int j;

	l = malloc(sizeof(struct labyrinth));
	l->n = LINES;
	l->p = COLUMNS;
	l->t = (int **) malloc(l->n * sizeof(int *));
	for (i = 0; i < l->n; i++) {
		for (j = 0; j < l->p; j++) {
			l->t[i] = (int *) malloc(l->p * sizeof(int));
		}	
	}

	return;
}

/*Init the labyrinth and put the values within*/
void init_labyrinth(){
	int i;
	int j;

	for (i = 0; i < l->n; i++) {
		for (j = 0; j < l->p; j++) {
			if (i == 0 && j == 1 || i == l->n - 1 && j == l->p - 2){
				l->t[i][j] = 1;
				continue;
			}
                        if (i == 0 || j == 0 || i == l->n - 1 || j == l->p -1){
                                l->t[i][j] = 0;
                                continue;
                        } else {
				l->t[i][j] = rand() % 2;
			}
		}
	}

	return;
}
