#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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
