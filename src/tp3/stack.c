#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "labyrinth.h"

/*Make the dynamic allocation on the precedent structure*/
void handle_stack(void) {
	st = malloc(sizeof(struct stack));
	st->size = 0;
	st->s = (int *) malloc(st->size * sizeof(int));
	return;
}

/*Check if the stack is empty*/
int empty(void) {
	return (st->size == 0);
}

/*Return the size of the size*/
int size(void) {
	return st->size;
}

/*Get the item in the summit of stack*/
void get(void) {
	if (empty() == 1) {
		printf("\nERROR : Can not get the summit of the stack, the stack is empty!\n");
      		return;
	}
	printf("\n(%d, %d)\t(%d, %d)\n", st->s[st->size - 4], st->s[st->size - 3], st->s[st->size - 2], st->s[st->size - 1]);

	return;	
}

/*Add value to sumiit of my stack*/
void add(int *x, int *y, int *a, int *b) {
	st->size += 4;
	st->s[st->size - 4] = *x;
	st->s[st->size - 3] = *y;
	st->s[st->size - 2] = *a;
	st->s[st->size - 1] = *b;
	return;
}

/*Remove item from the summit of my stack*/
void removeStack(void) {
	if (empty() == 1) {
                printf("\nERROR : Can not remove item from stack, the stack is empty!\n");
      		return;
        }
	st->size -= 4;
	return;
}

/*Get the adjacent boxes*/
void get_adjacent(int *a, int *b, int res[], int *size) {
	int adjacent[8] = {*a + 1, *b, *a, *b + 1, *a, *b - 1, *a - 1, *b};
	int i;

	for (i = 0; i < 8; i += 2) {
		if (l->t[adjacent[i]][adjacent[i + 1]] != 0 && (adjacent[i] != st->s[st->size - 4] || adjacent[i + 1] != st->s[st->size - 3])){
			*size += 2;
			res[*size - 2] = adjacent[i];
		       	res[*size - 1] = adjacent[i + 1];
		}
	}	
	return;
}

/*Check if the exploration is ending*/
int end_browsing(void){
	if (st->s[st->size - 2] == l->n - 1 && st->s[st->size - 1] == l->p - 2){
		return 1;
	}
	return 0;
}


/*Browse and explore the labyrinth*/
void browse(int *a, int *b, int res[], int *size){
	int i;

	while (!(end_browsing())) {
		get_adjacent(a, b, res, size);
		add(a, b, &res[0], &res[1]);
		printf("res : ");
		for (i = 0; i < *size; i += 2){
               		printf("(%d, %d)\t", res[i], res[i + 1]);
	        }
		get();
		printf("stack : ");
		for (i = 0; i < st->size; i += 2){
                        printf("(%d, %d)\t", st->s[i], st->s[i + 1]);
                }
		*a = st->s[st->size - 2];
		*b = st->s[st->size - 1];
		*size = 0;
		continue;
	}
	
	return;
}
