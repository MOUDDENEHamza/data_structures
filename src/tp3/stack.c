#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

#define LINES 5
#define COLUMNS 6

/*Make the dynamic allocation on the precedent structure*/
void handle_stack(){
	int i;
	int j;

	s = malloc(sizeof(struct stack));
	s->n = LINES;
	s->p = COLUMNS;
	s->st = (int **) malloc(s->n * sizeof(int *));
	for (i = 0; i < s->n; i++) {
		for (j = 0; j < s->p; j++) {
			s->st[i] = (int *) malloc(s->p * sizeof(int));
		}	
	}

	return;
}

/*Init the stack and put the values within*/
void init_stack(){
	int i;
	int j;

	for (i = 0; i < s->n; i++) {
		for (j = 0; j < s->p; j++) {
			if (i == 0 && j == 1 || i == s->n - 1 && j == s->p - 2){
				s->st[i][j] = 1;
				continue;
			}
                        if (i == 0 || j == 0 || i == s->n - 1 || j == s->p -1){
                                s->st[i][j] = 0;
                                continue;
                        } else {
			s->st[i][j] = rand() % 2;
			}
		}
	}

	return;
}
